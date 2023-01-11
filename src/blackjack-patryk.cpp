#include <cstdlib>
#include <string>
#include <iostream>

#include "blackjack-patryk.h"

using namespace std;


//nowa klasa gra?
/*
int main() {
    Player you;
    Dealer dealer;
    Cards deck;

    char ans, f_answ;
    int total = 0, total_p = 0, total_d = 0;
    do {
        deck.setSeed();

        you.addToHand(deck.drawCard());
        you.addToHand(deck.drawCard());

        dealer.addToHand(deck.drawCard());
        dealer.addToHand(deck.drawCard());

        cout << endl;

        cout << "YOUR CARDS: \n";
        cout << endl;
        you.showCards();


        total = you.calculate_total();

        if (total == 21) {

            cout << endl << "BlackJack! YOU WIN! \n";
            goto mylabel;
        }

        cout << endl << "DEALER CARDS: \n";
        dealer.showFirstCards();

        cout << endl << "Your total is: " << total << endl;

        if (total < 21)
            do {
                cout << endl << "Would you like to hit(y/n)?\n";
                cin>> ans;

                cout<<endl;

                if (ans == 'y' || ans == 'Y') {
                    you.addToHand(deck.drawCard());
                    total_p = you.calculate_total();
                    cout << "YOUR CARD's: \n";
                    you.showCards();
                    cout << endl << "Your total is: " << total_p << endl;
                    if (total_p > 21) {
                        cout << " You bust\n";
                        goto mylabel;
                    }
                }

            } while (ans == 'y' || ans == 'Y');

        if (ans == 'n' || ans == 'N') {
            total_p = you.calculate_total();
            total_d = dealer.calculate_total();
        }

        while (total_d < 17) {
            dealer.addToHand(deck.drawCard());
            total_d = dealer.calculate_total();
//            cout<< total_d <<endl;//<< "DEALERS CARDS: \n";
//            dealer.showCards();
        }
            cout << "DEALERS CARD's: \n";
            dealer.showCards();
            cout<<endl;


        if (total_d > 21)
            cout << "Dealer Busts! \n";


        cout << "Dealer total is: " << total_d << endl<<endl;

        dealer.whoWins(you);

mylabel:

        cout<< endl << "Would you like to play again(y/n)?\n";
        cin>>f_answ;

        deck.reset();
        dealer.reset_hand();
        you.reset_hand();

    } while (f_answ == 'y' || f_answ == 'Y');

    return 0;
}
*/

void Cards::setSeed() {
    srand(1);
}

//git
void Cards::reset() {
    size = 52;
}
// git
string Cards::drawCard() {
    int random;
    string temp;
    random = rand() % size;
    temp = deck[random];
    deck[random] = deck[size - 1];
    deck[size - 1] = temp;
    size--;

    return temp;
}
// git ?
void Cards::fill_deck() {
    deck[0] = "h2";
    deck[1] = "h3";
    deck[2] = "h4";
    deck[3] = "h5";
    deck[4] = "h6";
    deck[5] = "h7";
    deck[6] = "h8";
    deck[7] = "h9";
    deck[8] = "h10";
    deck[9] = "hJ";
    deck[10] = "hQ";
    deck[11] = "hK";
    deck[12] = "hA";
    deck[13] = "s2";
    deck[14] = "s3";
    deck[15] = "s4";
    deck[16] = "s5";
    deck[17] = "s6";
    deck[18] = "s7";
    deck[19] = "s8";
    deck[20] = "s9";
    deck[21] = "s10";
    deck[22] = "sJ";
    deck[23] = "sQ";
    deck[24] = "sK";
    deck[25] = "sA";
    deck[26] = "d2";
    deck[27] = "d3";
    deck[28] = "d4";
    deck[29] = "d5";
    deck[30] = "d6";
    deck[31] = "d7";
    deck[32] = "d8";
    deck[33] = "d9";
    deck[34] = "d10";
    deck[35] = "dJ";
    deck[36] = "dQ";
    deck[37] = "dK";
    deck[38] = "dA";
    deck[39] = "c2";
    deck[40] = "c3";
    deck[41] = "c4";
    deck[42] = "c5";
    deck[43] = "c6";
    deck[44] = "c7";
    deck[45] = "c8";
    deck[46] = "c9";
    deck[47] = "c10";
    deck[48] = "cJ";
    deck[49] = "cQ";
    deck[50] = "cK";
    deck[51] = "cA";
}
// zamiast tej nazwy uzyc emotki?
void Player::convert_card_to_string(string card) {
    string suit, value;
    suit = card.substr(0, 1);
    value = card.substr(1, 1);



    if (value == "2")
        cout << "<Two>";
    else if (value == "3")
        cout << "<Three>";
    else if (value == "4")
        cout << "<Four>";
    else if (value == "5")
        cout << "<Five>";
    else if (value == "6")
        cout << "<Six>";
    else if (value == "7")
        cout << "<Seven>";
    else if (value == "8")
        cout << "<Eight>";
    else if (value == "9")
        cout << "<Nine>";
    else if (value == "1")
        cout << "<Ten>";
    else if (value == "J")
        cout << "<Jack>";
    else if (value == "Q")
        cout << "<Queen>";
    else if (value == "K")
        cout << "<King>";
    else if (value == "A")
        cout << "<Ace>";

    if (suit == "h")
        cout << "<Hearts>";
    else if (suit == "s")
        cout << "<Spades>";
    else if (suit == "c")
        cout << "<Clubs>";
    else if (suit == "d")
        cout << "<Diamonds>";

    cout << endl;
}
//git
int Player::convert_card_to_value(string card) {
    int score;
    string value;
    value = card.substr(1);

    if (value == "2")
        score = 2;
    else if (value == "3")
        score = 3;
    else if (value == "4")
        score = 4;
    else if (value == "5")
        score = 5;
    else if (value == "6")
        score = 6;
    else if (value == "7")
        score = 7;
    else if (value == "8")
        score = 8;
    else if (value == "9")
        score = 9;
    else if (value == "10")
        score = 10;
    else if (value == "J")
        score = 10;
    else if (value == "Q")
        score = 10;
    else if (value == "K")
        score = 10;
    else if (value == "A")
        score = 11;

    return score;

}

//git
int Player::calculate_total() {
    int temp = 0, total = 0, count = 0;
    //    string card, value;
    //
    //    value = card.substr(1, 1);

    for (int i = 0; i < hand_size; i++) {
        temp = convert_card_to_value(hand[i]);
        total = temp + total;
    }
    if (total > 21) {
        for (int i = 0; i < hand_size; i++) {
            if (hand[i] == "hA" || hand[i] == "cA" || hand[i] == "sA" || hand[i] == "dA") {
                total = total - 10;
                count++;
            }
            if (count > 1 && total + 10 <= 21)
                //if (total + 10 < 21)
                    total = total + 10;
            //                else
            //                    total = total515

        }
    }




    return total;
}

//git
void Player::addToHand(string card) {
    hand[hand_size++] = card;
}

//git
void Player::showCards() {
    for (int i = 0; i < hand_size; i++) {
        convert_card_to_string(hand[i]);
    }
}

//git
void Player::reset_hand() {
    for (int i = 0; i < hand_size; i++) {
        hand[i] = " ";
    }
    hand_size = 0;

}

//git
void Dealer::showFirstCards() {
    convert_card_to_string(hand[0]);
    cout << "<Hidden>\n";
}

//zmienic na return?
void Dealer::whoWins(Player you) {
    int total_p, total_d;
    total_d = calculate_total();
    total_p = you.calculate_total();

    if (total_d > 21)
        cout << "You win\n";
    else if (total_d == total_p)
        cout << "TIE \n";
    else if (total_d > 21 && total_p > 21)
        cout << "You Lose \n";
    else if (total_p > 21)
        cout << "You lose \n";
    else if (total_p > total_d)
        cout << "You win!\n";
    else if (total_d > total_p)
        cout << "You Lose. \n";

}

//git
Player::Player() {
    hand_size = 0;
}

//git
Dealer::Dealer() {
}

//git
Cards::Cards() {
    size = 52;
    fill_deck();
}
