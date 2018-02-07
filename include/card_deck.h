// Class definition for card deck
#ifndef CARD_DECK_H
#define CARD_DECK_H

#include <iostream>
#include <cstdint>
#include <vector>
#include <string>

class CardDeck
{
public:
    // Constructor
    CardDeck();

    // Destructor
    ~CardDeck();

    /***** Methods *****/
    // Shuffle card deck
    void shuffle();

    // Draw a card from deck
    void draw();

    /***** Member *****/
    uint_fast8_t m_number_of_cards;
    std::vector<std::string> m_card_attributes;
    std::vector<std::string> m_card_numbers;


};


#endif // CARD_DECK_H
