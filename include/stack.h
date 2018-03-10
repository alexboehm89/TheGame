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
    std::string m_direction;
    unsigned m_starting_point;
    std::vector<unsigned> m_current_cards;

};

#endif // STACK_H