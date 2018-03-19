#include "card.h"

Card::Card(unsigned value) : m_value(value)
{
}

Card::~Card()
{
}

void Card::show_value()
{
    std::cout << "Card value is: " << m_value << std::endl;
}

unsigned Card::get_value()
{
    return m_value;
}