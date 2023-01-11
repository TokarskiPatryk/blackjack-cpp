#include "Deck.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <string>

using namespace std;

Deck::Deck()
{

    fillDeck();
    shuffle();
}

void Deck::fillDeck()
{
    for(int i = 1; i <= 12; ++i)
    {
        char c;
        switch(i){
            case 1 :  c = 'A'; break;
            case 2 :  c = '2'; break;
            case 3 :  c = '3'; break;
            case 4 :  c = '4'; break;
            case 5 :  c = '5'; break;
            case 6 :  c = '6'; break;
            case 7 :  c = '7'; break;
            case 8 :  c = '8'; break;
            case 9 :  c = '9'; break;
            case 10:  c = 'W'; break;
            case 11:  c = 'D'; break;
            case 12:  c = 'K';
        }
        for(int n = 0; n <= 3; ++n)
        {
            m_deck.push_back(new Card(c,n));
        }
    }
}

void Deck::shuffle()
{
    random_shuffle(m_deck.begin(), m_deck.end());
}

Card Deck::giveCard()
{
    for(int i = 0; i < m_deck.size(); ++i)
    {
        if(!m_deck[i]->getIfGiven())
        {
            m_deck[i]->setGiven(1);
            return (*m_deck[i]);
        }
    }
}
