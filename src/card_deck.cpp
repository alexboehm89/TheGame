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
    m_current_card_deck = m_unique_cards;
}

CardDeck::~CardDeck()
{
}

void CardDeck::shuffle()
{
    std::vector<std::array<std::string, 2> > aux_card_deck;
    while (m_current_card_deck.size() != 0)
    {
        // Initalize random number generator
        srand(clock());
        // Get random vector element
        int random_index = rand() % m_current_card_deck.size();
        // Copy card new deck
        aux_card_deck.push_back(m_current_card_deck[random_index]);
        // Delete that card from curent deck
        m_current_card_deck.erase(m_current_card_deck.begin() + random_index);
    }
    m_current_card_deck = aux_card_deck;
}

void CardDeck::draw()
{
    std::cout << "##########################" << std::endl;
    for (auto const& i_card: m_current_card_deck)
    {
        std::cout << i_card[0]  << " " << i_card[1] << std::endl;
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
