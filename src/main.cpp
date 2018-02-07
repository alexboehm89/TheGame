// Main file for the Game
#include "card_deck.h"

int main (int argc, char **argv)
{
    static const std::string arr1[] = {"Hearts", "Diamonds", "Spades", "Clubs"};
    static const std::string arr2[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    std::vector<std::string> attributes (arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]) );
    std::vector<std::string> numbers (arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]) );
    CardDeck card_deck(attributes, numbers);
    card_deck.shuffle();
    card_deck.draw();
}
