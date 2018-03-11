// Main file for the Game
#include "deck.h"
#include "stack.h"
#include "card.h"
#include "player.h"

int main (int argc, char **argv)
{
    std::cout << "########## Initializing The Game! ########## " << std::endl;
    std::cout << "Creating deck ..." << std::endl;
    Deck deck(98);
    deck.shuffle();
    std::cout << "Creating stacks ..." << std::endl;
    Stack stack_up_1(1, "up");
    Stack stack_up_2(1, "up");
    Stack stack_down_1(100, "down");
    Stack stack_down_2(100, "down");

    std::cout << "Creating player ..." << std::endl;
    Player player("player1");
    player.show_name();


    Card card;

}
