#include <cstdlib>
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

    if (value == "2" && suit =="h")
        word= "🂲";
    else if (value == "2" && suit =="s")
        word= "🂢";
    else if (value == "2" && suit =="c")
        word= "🂲";
    else if (value == "2" && suit =="d")
        word= "🃂";

    else if (value == "3" && suit =="h")
        word= "🂳";
    else if (value == "3" && suit =="s")
        word= "🂣";
    else if (value == "3" && suit =="c")
        word= "🃓";
    else if (value == "3" && suit =="d")
        word= "🃃";

    else if (value == "4" && suit =="h")
        word= "🂴";
    else if (value == "4" && suit =="s")
        word= "🂤";
    else if (value == "4" && suit =="c")
        word= "🃔";
    else if (value == "4" && suit =="d")
        word= "🃄";

    else if (value == "5" && suit =="h")
        word= "🂵";
    else if (value == "5" && suit =="s")
        word= "🂥";
    else if (value == "5" && suit =="c")
        word= "🃕";
    else if (value == "5" && suit =="d")
        word= "🃅";

    else if (value == "6" && suit =="h")
        word= "🂶";
    else if (value == "6" && suit =="s")
        word= "🂦";
    else if (value == "6" && suit =="c")
        word= "🃖";
    else if (value == "6" && suit =="d")
        word= "🃆";

    else if (value == "7" && suit =="h")
        word= "🂷";
    else if (value == "7" && suit =="s")
        word= "🂧";
    else if (value == "7" && suit =="c")
        word= "🃗";
    else if (value == "7" && suit =="d")
        word= "🃇";

    else if (value == "8" && suit =="h")
        word= "🂸";
    else if (value == "8" && suit =="s")
        word= "🂨";
    else if (value == "8" && suit =="c")
        word= "🃘";
    else if (value == "8" && suit =="d")
        word= "🃈";

    else if (value == "9" && suit =="h")
        word= "🂹";
    else if (value == "9" && suit =="s")
        word= "🂩";
    else if (value == "9" && suit =="c")
        word= "🃙";
    else if (value == "9" && suit =="d")
        word= "🃉";
//dorobic reszte  i dodac karty

    else if (value == "1" && suit =="h")
        word= "🂺";
    else if (value == "1" && suit =="s")
        word= "🂪";
    else if (value == "1" && suit =="c")
        word= "🃚";
    else if (value == "1" && suit =="d")
        word= "🃊";

    else if (value == "J" && suit =="h")
        word= "🂻";
    else if (value == "J" && suit =="s")
        word= "🂫";
    else if (value == "J" && suit =="c")
        word= "🃛";
    else if (value == "J" && suit =="d")
        word= "🃋";

    else if (value == "Q" && suit =="h")
        word= "🂽";
    else if (value == "Q" && suit =="s")
        word= "🂭";
    else if (value == "Q" && suit =="c")
        word= "🃝";
    else if (value == "Q" && suit =="d")
        word= "🃍";

    else if (value == "K" && suit =="h")
        word= "🂾";
    else if (value == "K" && suit =="s")
        word= "🂮";
    else if (value == "K" && suit =="c")
        word= "🃞";
    else if (value == "K" && suit =="d")
        word= "🃎";

    else if (value == "A" && suit =="h")
        word= "🂱";
    else if (value == "A" && suit =="s")
        word= "🂡";
    else if (value == "A" && suit =="c")
        word= "🃑";
    else if (value == "A" && suit =="d")
        word= "🃁";

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
const char * Player::showCards() {
    std::string c= convert_card_to_string(hand[0]);
    c+=convert_card_to_string(hand[1]);
    if(hand_size>=3) c+= convert_card_to_string(hand[2]);
    if(hand_size>=4) c+= convert_card_to_string(hand[3]);
    if(hand_size>=5) c+= convert_card_to_string(hand[4]);
    if(hand_size>=6) c+= convert_card_to_string(hand[5]);
    if(hand_size>=7) c+= convert_card_to_string(hand[6]);
    if(hand_size>=8) c+= convert_card_to_string(hand[7]);
    if(hand_size>=9) c+= convert_card_to_string(hand[8]);

    const char * ss = c.c_str();
    return ss;
}

//git
void Player::reset_hand() {
    for (int i = 0; i < hand_size; i++) {
        hand[i] = " ";
    }
    hand_size = 0;
}

//git
const char * Dealer::showFirstCards() {
    std::string str = convert_card_to_string(hand[0])+"🂠";
    const char * ss = str.c_str();
    return ss;
}

//zmienic na return?
string Dealer::whoWins(Player you) {
    int total_p, total_d;
    total_d = calculate_total();
    total_p = you.calculate_total();

    if (total_d > 21)
        return "You win";
    else if (total_d == total_p)
        return "TIE";
    else if (total_d > 21 && total_p > 21)
        return "You Lose";
    else if (total_p > 21)
        return "You lose";
    else if (total_p > total_d)
        return "You win!";
    else if (total_d > total_p)
        return "You Lose";

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
