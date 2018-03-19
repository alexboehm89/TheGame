#include "player.h"

Player::Player()
{
    m_name = "player";
}

Player::Player(std::string name)
{
    m_name = name;
}

Player::~Player()
{
}

void Player::show_remaining_cards()
{
    
}

void Player::show_name()
{
    std::cout << "Name of player: " << m_name << std::endl;
}

void Player::play_card(Stack stack, unsigned value)
{
    // Find card with given value
    Card card(value);
    stack.add(card);
}

void Player::draw(Deck deck, unsigned number_of_cards)
{
    // Draw cards from deck
    if (deck.get_number_of_cards() <= number_of_cards)
    {
       // std::vector<unsigned> drawn_cards = deck.draw(number_of_cards);
       std::cout << m_name << std::endl;
    }


}