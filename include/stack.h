#ifndef STACK_H
#define STACK_H

#include <string>
#include <vector>
#include <iostream>

#include "card.h"

class Stack
{
public:
    // Constructor
    Stack(unsigned, std::string);

    // Destructor
    ~Stack();

    /***** Methods *****/
    void show();
    void add(Card);

private:

    /***** Member *****/
    const std::string m_direction;
    const unsigned m_starting_point;
    std::vector<Card> m_current_cards;

};

#endif // STACK_H