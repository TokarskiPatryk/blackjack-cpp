#ifndef DECK_H
#define DECK_H
#include <iostream>
#include "Card.h"
#include <vector>
#include <algorithm>
#include <ctime>
#include <string>

using namespace std;

class Deck
{
    private:
    vector<Card*> m_deck;

    public:
    Deck();

    void fillDeck();
    void shuffle() ;
    Card giveCard();
};

#endif // DECK_H
