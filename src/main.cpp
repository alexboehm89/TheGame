// Main file for the Game
#include "deck.h"
#include "card.h"

int main (int argc, char **argv)
{
    Deck deck(98);
    deck.shuffle();
    deck.show();

    Card card;

    std::cout << "A card is drawn" << std::endl;
    card = deck.draw();
    card.show();
    std::cout << "The deck is shown" << std::endl;

    deck.show();

}
