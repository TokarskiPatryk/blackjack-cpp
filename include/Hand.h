#ifndef HAND_H
#define HAND_H
#include <iostream>
#include "Card.h"
#include "Deck.h"
#include <vector>
#include <algorithm>
#include <ctime>
#include <string>


using namespace std;
class Hand
{

    private:
    vector<Card> m_hand;

    public:

    void init(Card, Card) ;
    void display()        ;
    void displayAsDealer();
    void addCard(Card)    ;

    int getNumOfCards();
    int getTotalVal()  ;
};
#endif // HAND_H
