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