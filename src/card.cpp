#include "card.h"

Card::Card()
{
}

Card::Card(unsigned value)
{
    m_value = value;
}

Card::~Card()
{
}

void Card::show()
{
    std::cout << "Card value is: " << m_value << std::endl;
}

unsigned Card::get_value()
{
    return m_value;
}