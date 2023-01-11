#include <cstdlib>
#include <string>
#include <iostream>
#include <time.h>

#include "blackjack-p.h"

using namespace std;

void Cards::setSeed() {
    srand(time(0));
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
string Player::convert_card_to_string(string card) {
    string suit, value, word;
    suit = card.substr(0, 1);
    value = card.substr(1, 1);

    word="";

    if (value == "2")
        word+= "<Two>";
    else if (value == "3")
        word+= "<Three>";
    else if (value == "4")
        word+= "<Four>";
    else if (value == "5")
        word+= "<Five>";
    else if (value == "6")
        word+= "<Six>";
    else if (value == "7")
        word+= "<Seven>";
    else if (value == "8")
        word+= "<Eight>";
    else if (value == "9")
        word+= "<Nine>";
    else if (value == "1")
        word+= "<Ten>";
    else if (value == "J")
        word+= "<Jack>";
    else if (value == "Q")
        word+= "<Queen>";
    else if (value == "K")
        word+= "<King>";
    else if (value == "A")
        word+= "<Ace>";

    if (suit == "h")
        word+= "<Hearts>\n";
    else if (suit == "s")
        word+= "<Spades>\n";
    else if (suit == "c")
        word+= "<Clubs>\n";
    else if (suit == "d")
        word+= "<Diamonds>\n";

    return word;
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
string Player::showCards() {
    string c = "";
    for (int i = 0; i < hand_size; i++) {
            c+=convert_card_to_string(hand[i]);
    }
    return c;
}

//git
void Player::reset_hand() {
    for (int i = 0; i < hand_size; i++) {
        hand[i] = " ";
    }
    hand_size = 0;

}

//git
string Dealer::showFirstCards() {
    return convert_card_to_string(hand[0])+"<Hidden>";
}

//zmienic na return?
string Dealer::whoWins(Player you) {
    int total_p, total_d;
    total_d = calculate_total();
    total_p = you.calculate_total();

    if (total_d > 21)
        return "You win\n";
    else if (total_d == total_p)
        return "TIE \n";
    else if (total_d > 21 && total_p > 21)
        return "You Lose \n";
    else if (total_p > 21)
        return "You lose \n";
    else if (total_p > total_d)
        return "You win!\n";
    else if (total_d > total_p)
        return "You Lose. \n";

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
