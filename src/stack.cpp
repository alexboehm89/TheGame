#include "stack.h"

Stack::Stack(unsigned start, std::string direction)
{
    m_direction      = direction;
    m_starting_point = start;
}

Stack::~Stack()
{
}

void Stack::show()
{
    if (m_current_cards.size() != 0)
    {
        for (auto const& i_card : m_current_cards)
        {
            std::cout << i_card << std::endl;
        }
    } else
    {
        std::cout << "This stack is empty" << std::endl;
    }
}

void Stack::add(Card card)
{
    m_current_cards.push_back(card.get_value());
}