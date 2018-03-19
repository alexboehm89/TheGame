#ifndef CARD_H
#define CARD_H

#include <iostream>

class Card
{
public:
    // Constructor
    Card(unsigned);

    // Destructor
    ~Card();

    /****** Methods *****/
    void show_value();
    unsigned get_value();

private:
    const unsigned m_value;
};


#endif // CARD_H 