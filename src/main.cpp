// Main file for the Game
#include "card_deck.h"

int main (int argc, char **argv)
{
    CardDeck card_deck;
    card_deck.shuffle();
    card_deck.draw();
}
