#include "Dealer.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <string>

using namespace std;

void Dealer::seeCard()
 {
    cout << "Dealer's card: ";
    m_hand.displayAsDealer();
    cout << endl;
 }

 void Dealer::game(Player play)
 {
    while(m_hand.getTotalVal() <= 21)
    {
        cout << "Cards: ";
        m_hand.display();
        cout << endl;
        if(m_hand.getTotalVal() > play.getScore() && m_hand.getTotalVal() <= 21)
        {
            cout << "The dealer won because his score was greater than yours and it didn't exceed 21 in any form." << endl;
            return;
        }
        if(m_hand.getTotalVal() == play.getScore())
        {
            cout <<" A tie "  << endl;
            return;
        }
        anotherCard();
    }
    if(m_hand.getTotalVal() > 21)
    {
        cout <<"The dealer went over 21, he lost " ;
        return;
    }
 }
