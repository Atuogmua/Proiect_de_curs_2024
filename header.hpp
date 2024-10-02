#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Card{
    public:
        enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
        enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};
        friend ostream& operator<<(ostream& os, const Card& aCard);
        Card(rank = ACE, suit = SPADES, bool ifu = true); 
        int GetValue() const;// returneaza valoarea cartii
        void Flip();// intoarce cartea
    private:
        rank m_Rank;
        suit m_Suit;
        bool m_IsFaceUp;
};


class Hand{
    public:
        Hand();
        virtual ~Hand();
        void Add(Card* pCard);
        void Clear(); //elibereaza jucatorul de carti
        int GetTotal() const; // calculeaza suma punctelor din mana jucatorului
    protected:
        vector<Card*> m_Cards;
};


class GenericPlayer : public Hand{
    friend ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);
    public:
        GenericPlayer(const string& name = "");
        virtual ~GenericPlayer();
        virtual bool IsHitting() const = 0;//daca merge mai departe jucatorul
        bool IsBusted() const;// returneaza o valoare daca jucatorul are mai mult de 21 de puncte
        void Bust() const;
    protected:
        string m_Name;
};


class Player : public GenericPlayer{
    public:
        Player(const string& name = "");
        virtual ~Player();
        virtual bool IsHitting() const; //daca doreste sa mai extraga o carte
        void Win() const; //declara ca a castigat
        void Lose() const; //declara ca a pierdut
        void Push() const;// egalitate
};


class House : public GenericPlayer{
    public:
        House(const string& name = "House");
        virtual ~House();
        virtual bool IsHitting() const; //daca doreste sa mai extraga o carte
        void FlipFirstCard();
};


class Deck : public Hand{
    public:
        Deck();
        virtual ~Deck();
        void Populate();//creaza un pachet standart de carti
        void Shuffle(); // amesteca cartile
        void Deal(Hand& aHand);// imparte cate o carte
        void AdditionalCards(GenericPlayer& aGenericPlayer);
};


class Game{
    public:
        Game(const vector<string>& names);
        ~Game();
        void Play();
    private:
        Deck m_Deck;
        House m_House;
        vector<Player> m_Players;
};

