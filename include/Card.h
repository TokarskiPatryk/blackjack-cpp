#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <string>

using namespace std;

class Card{
    private:
        char m_card;         //  'A'   ,'2', '3', '4', '5', '6', '7', '8', '9', 'W', 'D', 'K'
        int m_value,         //1 or 11 , 2  , 3  ,  4,   5 ,  6 ,  7 ,  8 ,  9,  10, 10,  10
        m_suite;
        string m_nameS;
        bool m_given;

        int assignValue();

    public:
        Card(char, int);
        Card(const Card&);

        int getValue()        const;
        int getSuite()        const;
        string getName()      const;
        bool getIfGiven()     const;
        char getCard()        const;

        void setGiven(bool x);

        void nameCard();
};

#endif // CARD_H
