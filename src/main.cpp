// Main file for the Game
#include "card_deck.h"

int main (int argc, char **argv)
{
    std::vector<std::string> attributes = {"Hearts", "Diamonds", "Spades", "Clubs"};
    std::vector<std::string> values = {"2", "3", "4", "5", "6", "7", "8", "9", "10",
                                        "Jack", "Queen", "King", "Ace"};
    CardDeck card_deck(attributes, values);
    card_deck.shuffle();
    card_deck.draw();
}
