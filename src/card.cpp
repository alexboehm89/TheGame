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
    std::cout << m_value << std::endl;
}