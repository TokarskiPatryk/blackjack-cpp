#ifndef DEALER_H
#define DEALER_H
#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <vector>
#include <algorithm>
#include <ctime>
#include <string>


using namespace std;

class Dealer : public Player  //The dealer IS A player
 {
    public:
    using Player::Player;

    void seeCard()   ;
    void game(Player);
 };

#endif // DEALER_H
