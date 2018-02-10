// Class definition for card deck
#ifndef CARD_DECK_H
#define CARD_DECK_H

#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <array>

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

private:

    // Create list of unique cards
    void uniqueCards();

    /***** Member *****/
    unsigned m_number_of_cards;
    size_t m_number_of_attributes;
    size_t m_number_of_values;
    std::vector<std::string> m_card_attributes;
    std::vector<std::string> m_card_values;
    std::vector<std::array<std::string, 2> > m_unique_cards;


};


#endif // CARD_DECK_H
