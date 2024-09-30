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