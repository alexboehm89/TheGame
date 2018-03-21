// Main file for the Game
#include "deck.h"
#include "stack.h"
#include "card.h"
#include "player.h"

int main (int argc, char **argv)
{
    /***** Ask user for amont of players *****/
    std::cout << "Please enter the number of players!" << std::endl;
    // Define necessary variables
    int number_of_players;
    std::vector<std::string> name_of_players;
    std::vector<Player> players;

    std::cin >> number_of_players;
    if (number_of_players > 0) {
        for (int idx = 1; idx != number_of_players + 1; idx++) {
            std::string player_name;
            std::cout << "Please enter the name for player " << idx << std::endl;
            std::cin >> player_name;
            name_of_players.push_back(player_name);
            Player player(player_name);
            players.push_back(player);
            std::cout << "Created player " << player_name << " !" << std::endl;
        }
    } else {
        std::cout << "You entered an invalid number of players! Exit The Game..." << std::endl;
        return 1;
    }


    std::cout << "########## Initializing The Game! ########## " << std::endl;
    std::cout << "Creating deck ..." << std::endl;
    Deck deck(98);
    deck.shuffle();
    std::cout << "Creating stacks ..." << std::endl;
    Stack stack_up_1(1, "up");
    Stack stack_up_2(1, "up");
    Stack stack_down_1(100, "down");
    Stack stack_down_2(100, "down");
}