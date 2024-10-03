#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "header.hpp"

using namespace std;


Card::Card(rank r, suit s, bool ifu): m_Rank(r), m_Suit(s), m_IsFaceUp(ifu){};

int Card::GetValue() const{
    int value = 0; // cartea intoarsa cu fata in jos are initial valoarea 0
    if(m_IsFaceUp){
        value = m_Rank; //valoarea cartii coincide cu numarul de pe ea
        if(value > 10){
            value = 10;
        }
    }
    return value;
};

void Card::Flip(){
    m_IsFaceUp = !(m_IsFaceUp);
};




Hand::Hand(){
    m_Cards.reserve(7);
};

Hand::~Hand(){
    Clear();
};

void Hand::Add(Card* pCard){
    m_Cards.push_back(pCard);
};

void Hand::Clear(){
    vector<Card*>::iterator iter = m_Cards.begin(); //sterge fiecare element din vector, eliberand si memoria
    for(iter = m_Cards.begin(); iter != m_Cards.end(); iter++){
        delete *iter;
        *iter = 0;
    }
    m_Cards.clear();// elibereaza si vectorul
};

int Hand::GetTotal() const{
    if(m_Cards.empty()){ //daca mana e libera, returneza 0
        return 0;
    }
    if(m_Cards[0]->GetValue() == 0){
        return 0;
    }

    int total = 0;
    vector<Card*>::const_iterator iter;
    for(iter = m_Cards.begin(); iter != m_Cards.end(); iter++){
        total += (*iter)->GetValue();
    }

    //↓ determina daca in mana este un as
    bool containsAce = false;
    for(iter = m_Cards.begin(); iter != m_Cards.end(); iter++){
        if((*iter)->GetValue() == Card::ACE){
            containsAce = true;
        }
    }

    //↓ daca suma e mica, as are valoarea de 11
    if(containsAce && total <= 11){
        total += 10; // adaugam doar 10, deaorece asul deja are valoarea de 1
    }

    return total;
};




GenericPlayer::GenericPlayer(const string& name) : m_Name(name){};

GenericPlayer::~GenericPlayer(){};

bool GenericPlayer::IsBusted() const{
    return (GetTotal() > 21);
};

void GenericPlayer::Bust() const{
    cout << m_Name << "busts." << endl;
};





Player::Player(const string& name) : GenericPlayer(name){};

Player::~Player(){};

bool Player::IsHitting() const{
    cout << m_Name <<", do you want to hit? (Y/N): " << endl;
    char response;
    cin >> response;
    return (response == 'y' || response == 'Y');
};

void Player::Win() const{
    cout << m_Name << " wins." << endl;
};

void Player::Lose() const{
    cout << m_Name << " loses." << endl;
};

void Player::Push() const{
    cout << m_Name << " pushes." << endl;
};





House::House(const string& name): GenericPlayer(name){};

House::~House(){};

bool House::IsHitting() const{
    return (GetTotal() <= 16);
};

void House::FlipFirstCard(){
    if(!(m_Cards.empty())){
        m_Cards[0]->Flip();
    }
    else{
        cout << "No cards to flip!" << endl;
    }
};




Deck::Deck(){
    m_Cards.reserve(52);
    Populate();
};

Deck::~Deck(){};

void Deck::Populate(){
    Clear();
    for(int s = Card::CLUBS; s <= Card::SPADES; s++){
        for(int r = Card::ACE; r <= Card::KING; r++){
            Add(new Card(static_cast<Card::rank>(r), static_cast<Card::suit>(s)));
        }
    }
};

void Deck::Shuffle(){        //Algoritmul Fisher-Yates
    srand(static_cast<unsigned int>(time(0)));
    for(int i = m_Cards.size()-1; i > 0; i--){
        int j = rand()%(i+1);
        swap(m_Cards[i], m_Cards[j]);
    }
};

void Deck::Deal(Hand& aHand){
    if(!m_Cards.empty()){
        aHand.Add(m_Cards.back());
        m_Cards.pop_back();
    }
    else{
        cout << "Out of cards. Unable to deal." << endl;
    }
};

void Deck::AdditionalCards(GenericPlayer& aGenericPlayer){
    while(!(aGenericPlayer.IsBusted()) && aGenericPlayer.IsHitting()){
        Deal(aGenericPlayer);
        cout << aGenericPlayer << endl;
        if(aGenericPlayer.IsBusted()){
            aGenericPlayer.Bust();
        }
    }
};






Game::Game(const vector<string>& names){
    vector<string>::const_iterator pName;//creaza un vector de jucatori din vectorul numelor
    for(pName = names.begin(); pName != names.end(); pName++){
        m_Players.push_back(Player(*pName));
    }
    srand(static_cast<unsigned int>(time(0)));
    m_Deck.Populate();
    m_Deck.Shuffle();
};

Game::~Game(){};

void Game::Play(){
    vector<Player>::iterator pPlayer;
    for(int i = 0; i < 2; i++){  //se imparte cate 2 carti initiale
        for(pPlayer = m_Players.begin(); pPlayer != m_Players.end(); pPlayer++){
            m_Deck.Deal(*pPlayer);
        }
        m_Deck.Deal(m_House);
    }
    
    m_House.FlipFirstCard();//intoarce fata primei carti a dealerului

    for(pPlayer = m_Players.begin(); pPlayer != m_Players.end(); pPlayer++){//deschide cartile tuturor jucatorilor
        cout << *pPlayer << endl;
    }

    cout << m_House << endl;

    for(pPlayer = m_Players.begin(); pPlayer != m_Players.end(); pPlayer++){//imparte carti adaugatoare jucatorilor
        m_Deck.AdditionalCards(*pPlayer);
    }

    m_House.FlipFirstCard();

    cout << m_House << endl;

    m_Deck.AdditionalCards(m_House);//imparte carti adaugatoare dealerului

    if(m_House.IsBusted()){ //toti care raman, castiga
        for(pPlayer = m_Players.begin(); pPlayer != m_Players.end(); pPlayer++){
            if(!(pPlayer->IsBusted())){
                pPlayer->Win();
            }
        }
    }
    else{
        for(pPlayer = m_Players.begin(); pPlayer != m_Players.end(); pPlayer++){// se compara punctajurile
            if(!(pPlayer->IsBusted())){
                if(pPlayer->GetTotal() > m_House.GetTotal()){
                    pPlayer->Win();
                }
                else if (pPlayer->GetTotal() < m_House.GetTotal()){
                    pPlayer->Lose();
                }
                else{
                    pPlayer->Push();
                }
            }
        }
    }

    for(pPlayer = m_Players.begin(); pPlayer != m_Players.end(); pPlayer++){//eliberare
        pPlayer->Clear();
    }
    m_House.Clear();
};




ostream& operator<<(ostream& os, const Card& aCard){
    const string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};//incep cu zero aici, deoare cartile incep iteratiile cu 1
    const string SUITS[] = {"\u0005", "\u0004", "\u0003", "\u0006"};
    if (aCard.m_IsFaceUp){
        os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    }
    else{
        os << "XX";
    }
    return os;
};

ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer){
    os << aGenericPlayer.m_Name << ":\t";
    vector<Card*>::const_iterator pCard;
    if(!aGenericPlayer.m_Cards.empty()){
        for(pCard = aGenericPlayer.m_Cards.begin(); pCard != aGenericPlayer.m_Cards.end(); pCard++){
            os << *(*pCard) << "\t";
        }
        if(aGenericPlayer.GetTotal() != 0){
            cout << "(" << aGenericPlayer.GetTotal() << ")";
        }
    }
    else{
        os << "<empty>";
    }
    return os;
};