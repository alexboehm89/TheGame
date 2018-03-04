// Main file for the Game
#include "deck.h"
#include "stack.h"
#include "card.h"

int main (int argc, char **argv)
{
    std::cout << "Creating deck..." << std::endl;
    Deck deck(98);
    deck.shuffle();
    deck.show();

    Card card;
    Stack stack(100, "down");

    while (deck.get_number_of_cards() != 0)
    {
        card = deck.draw();
        stack.add(card);
    }
    
    std::cout << "Show deck..." << std::endl;
    deck.show();
    std::cout << "Show stack..." << std::endl;
    stack.show();

}
