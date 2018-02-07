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
    CardDeck(std::vector<std::string>, std::vector<std::string>);

    // Destructor
    ~CardDeck();

    /***** Methods *****/
    // Shuffle card deck
    void shuffle();

    // Draw a card from deck
    void draw();

    /***** Member *****/
    uint_fast8_t m_amount_of_cards;
    size_t m_amount_of_attributes;
    size_t m_amount_of_numbers;
    std::vector<std::string> m_card_attributes;
    std::vector<std::string> m_card_numbers;


};


#endif // CARD_DECK_H
