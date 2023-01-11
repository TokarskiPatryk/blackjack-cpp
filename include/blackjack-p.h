#ifndef BLACKJACK-P_H_INCLUDED
#define BLACKJACK-P_H_INCLUDED

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class Cards {
public:
    string deck[52];
    string drawCard();
    void fill_deck();
    void setSeed();
    void reset();
    int size;
    Cards();
};

class Player {
public:
    string hand[52];
    int hand_size;
    int calculate_total();
    void addToHand(string card);
    string showCards();
    void reset_hand();
    Player();
    string convert_card_to_string(string card);
    int convert_card_to_value(string card);

};

class Dealer : public Player {
public:
    string showFirstCards();
    string whoWins(Player you);
    Dealer();

};



#endif // BLACKJACK-P_H_INCLUDED
