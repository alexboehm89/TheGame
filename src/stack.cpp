#include "stack.h"

Stack::Stack(unsigned start, std::string direction)
                            : m_direction(direction), m_starting_point(start)
{
}

Stack::~Stack()
{
}

void Stack::show()
{
    if (m_current_cards.size() != 0)
    {
        std::cout << "Direction: " << m_direction << " Starting Point: " << m_starting_point << std::endl;
        for (auto i_card : m_current_cards)
        {
            std::cout << i_card.get_value() << std::endl;
        }
    } else
    {
        std::cout << "This stack is empty" << std::endl;
    }
}

void Stack::add(Card card)
{
    m_current_cards.push_back(card);
}