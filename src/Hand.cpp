#include "Hand.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <string>

using namespace std;

void Hand::init(Card card1, Card card2)
{
    m_hand.push_back(card1);
    m_hand.push_back(card2);
}

void Hand::display()
{
    for(vector<Card>::iterator iter = m_hand.begin();
    iter != m_hand.end(); (++iter))
    {
        iter->nameCard();
    }
}

void Hand::displayAsDealer()
{
    m_hand[0].nameCard();
}

void Hand::addCard(Card card)
{
    cout << "\nTook out: ";
    card.nameCard();

    m_hand.push_back(card);
}

int Hand::getTotalVal()
{
    int sum = 0;
    for(vector<Card>::iterator iter = m_hand.begin();
    iter != m_hand.end(); (++iter))
    {
        sum += iter->getValue();
    }
    return sum;
}

int Hand::getNumOfCards()
{
    return m_hand.size();
}
