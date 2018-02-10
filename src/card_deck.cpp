#include "card_deck.h"

CardDeck::CardDeck(std::vector<std::string> attributes, std::vector<std::string> values)
{
    m_card_attributes = attributes;
    m_card_values = values;

    // Get sizes of vectors
    m_number_of_attributes = m_card_attributes.size();
    m_number_of_values = m_card_values.size();
    uniqueCards();
    m_number_of_cards = m_unique_cards.size();
}

CardDeck::~CardDeck()
{
}

void CardDeck::shuffle()
{
    std::cout << "Number of cards: " << m_number_of_cards << std::endl;
    std::cout << "Number of attributes: " << m_number_of_attributes << std::endl;
    std::cout << "Number of values: " << m_number_of_values << std::endl;

}

void CardDeck::draw()
{
    for (auto const& i_unique_cards: m_unique_cards)
    {
        std::cout << i_unique_cards[0]  << " " << i_unique_cards[1] << std::endl;
    }
}

void CardDeck::uniqueCards()
{
    for (auto const& i_value: m_card_values)
    {
        for (auto const& i_attributes: m_card_attributes)
        {
            std::array<std::string, 2> current_card = {i_value, i_attributes};
            m_unique_cards.push_back(current_card);
        }
    }
}
