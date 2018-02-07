#include "card_deck.h"

CardDeck::CardDeck(std::vector<std::string> attributes, std::vector<std::string> numbers)
{
    m_card_attributes = attributes;
    m_card_numbers = numbers;

    // Get sizes of vectors
    m_amount_of_attributes = m_card_attributes.size();
    m_amount_of_numbers = m_card_numbers.size();
}

CardDeck::~CardDeck()
{
}

void CardDeck::shuffle()
{
    std::cout << m_amount_of_attributes << std::endl;

}

void CardDeck::draw()
{
    std::cout << m_amount_of_numbers << std::endl;
}
