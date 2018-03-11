#include "deck.h"

Deck::Deck(unsigned number_of_cards)
{
    // Create a list of all cards
    for (unsigned value = 2; m_cards.size() != number_of_cards; ++value)
    {
        m_cards.push_back(value);
    }
}

Deck::~Deck()
{
}

void Deck::show()
{
    if (m_cards.size() != 0)
    {
        for (auto const& i_card : m_cards)
        {
            std::cout << i_card << std::endl;
        }
    } else
    {
        std::cout << "This deck is empty" << std::endl;
    }
}
void Deck::shuffle()
{
    std::vector<unsigned> aux_deck;
    while (m_cards.size() != 0)
    {
        // Initalize random number generator
        srand(clock());
        // Get random vector element
        int random_index = rand() % m_cards.size();
        // Copy card new deck
        aux_deck.push_back(m_cards[random_index]);
        // Delete that card from current deck
        m_cards.erase(m_cards.begin() + random_index);
    }
    m_cards = aux_deck;
}

std::vector<unsigned> Deck::draw(unsigned requested_cards)
{
    // Draw cards
    std::vector<unsigned> drawn_cards;
    while (drawn_cards.size() != requested_cards)
    {
        // Add card 
        drawn_cards.push_back(m_cards[0]);
        // Erase card from deck
        m_cards.erase(m_cards.begin());
    }

    return m_cards;
}

unsigned Deck::get_number_of_cards()
{
    return m_cards.size();
}