#include "Card.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <string>

using namespace std;

int Card::assignValue(){
    if(m_card == 'A')         return 11;
    else if (m_card == 'W' ||
             m_card == 'D' ||
             m_card == 'K')   return 10;
    else                      return (m_card - '0');
}

Card::Card(char cardV, int suite){
    m_card = cardV;
    m_value = assignValue();
    m_suite = suite;
    m_given = false;
}

Card::Card(const Card& card){
    m_card = card.getCard();
    m_value = card.getValue();
    m_suite = card.getSuite();
    m_nameS = card.getName();
    m_given = card.getIfGiven();
}

int Card::getValue() const
{ return m_value; }

int Card::getSuite() const
{ return m_suite; }

string Card::getName() const
{ return m_nameS; }

bool Card::getIfGiven() const
{ return m_given; }

char Card::getCard() const
{ return m_card; }

void Card::setGiven(bool x)
{ m_given = x; }



void Card::nameCard(){
    switch(m_suite){
        case 0: m_nameS = "Pik"; break;
        case 1: m_nameS = "Trefl"; break;
        case 2: m_nameS = "Kier"; break;
        case 3: m_nameS = "Karo";
    }
    if(m_card == 'A'){
        cout << "As";
    }
    else if (m_card == 'W'){
        cout << "Walet";
    }
    else if (m_card == 'D'){
        cout << "Dama";
    }
    else if (m_card == 'K'){
        cout << "Król";
    }
    else cout << m_value;

    cout << m_nameS << endl;
}
