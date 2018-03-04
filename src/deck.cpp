#include "deck.h"

Deck::Deck(unsigned number_of_cards)
{
    m_number_of_cards = number_of_cards;
    
    // Create a list of all cards
    for (unsigned value = 2; m_cards.size() != number_of_cards; ++value)
    {
        m_cards.push_back(value);
    }
    std::cout << "size: " << m_cards.size() << std::endl;
    
    m_curent_cards = m_cards;
}

Deck::~Deck()
{
}

void Deck::show()
{
    if (m_curent_cards.size() != 0)
    {
        for (auto const& i_card : m_curent_cards)
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
    while (m_curent_cards.size() != 0)
    {
        // Initalize random number generator
        srand(clock());
        // Get random vector element
        int random_index = rand() % m_curent_cards.size();
        // Copy card new deck
        aux_deck.push_back(m_curent_cards[random_index]);
        // Delete that card from curent deck
        m_curent_cards.erase(m_curent_cards.begin() + random_index);
    }
    m_curent_cards = aux_deck;
}

Card Deck::draw()
{
    // Draw card
    Card m_card(m_curent_cards[0]);
    // Delete card from deck
    m_curent_cards.erase(m_curent_cards.begin());
    m_number_of_cards--;

    return m_card;
}

unsigned Deck::get_number_of_cards()
{
    return m_number_of_cards;
}