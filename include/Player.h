#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include <vector>
#include <algorithm>
#include <ctime>
#include <string>


using namespace std;

class Player
{
    protected:
    Deck m_deck;
    Hand m_hand;
    bool m_canGetCards;
    int score;

    public:
    Player(Deck deck);
    void plant();
    void anotherCard();
    void seeCards();

    int getScore() const;

    bool lost();
    bool won();
 };

#endif // PLAYER_H
