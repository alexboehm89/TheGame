#include "player.h"

Player::Player(std::string name)
{
    m_name = name;
}

Player::~Player()
{
}

void Player::show_remaining_cards()
{
    if (!m_cards.empty())
    {
        for (auto i_card : m_cards)
        {
            i_card.show_value();
        }
    } else 
    {
        std::cout << m_name << " has no cards!" << std::endl;
    }
    
}

void Player::show_name()
{
    std::cout << "Name of player: " << m_name << std::endl;
}

void Player::play_card(Stack stack, unsigned value)
{
    // Find card with given value
    for (unsigned idx; idx != m_cards.size(); idx++) {
        if (m_cards[idx].get_value() == value) {
            // Add card to stack
            stack.add(m_cards[idx]);
            // Remove card from hand
            m_cards.erase(m_cards.begin() + idx);
        }
    }
}

void Player::draw(Deck deck, unsigned number_of_cards)
{
    // Draw cards from deck
    if (deck.get_number_of_cards() >= number_of_cards)
    {
        // Draw cards
        std::vector<Card> drawn_cards = deck.draw(number_of_cards);
        // Add to holding cards
        m_cards.insert(std::end(m_cards), std::begin(drawn_cards), std::end(drawn_cards));
    }
}