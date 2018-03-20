#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "stack.h"
#include "card.h"
#include "deck.h"

class Player
{
public:
    // Constructor
    Player(std::string);

    // Destructor
    ~Player();

    /***** Methods *****/
    void show_remaining_cards();
    void show_name();
    void play_card(Stack, unsigned);
    void draw(Deck, unsigned);

private:

    /***** Member *****/
    std::string m_name;
    std::vector<Card> m_cards;

};

#endif // PLAYER_H