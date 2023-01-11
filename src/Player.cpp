#include "Player.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <string>

using namespace std;

Player::Player(Deck deck)
 {
    m_canGetCards = 1;
    m_deck = deck;
    m_hand.init(deck.giveCard(), deck.giveCard());
 }

 void Player::plant()
 {
    m_canGetCards = 0;
    score = m_hand.getTotalVal();
 }

 void Player::anotherCard()
 {
    if(m_canGetCards) m_hand.addCard(m_deck.giveCard());
    else cout << "You cannot get more cards" << endl;
 }

 bool Player::lost()
 {
    if(m_hand.getTotalVal() > 21)
    {
        cout << "you went over 21" << endl;
        return true;
    }
    return false;
 }

 bool Player::won()
 {
    return (m_hand.getTotalVal() == 21 && m_hand.getNumOfCards() == 2);
 }

 void Player::seeCards()
 {
    cout << "Your cards: ";
    m_hand.display();
 }

 int Player::getScore() const
 { return score; }


