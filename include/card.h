#ifndef CARD_H
#define CARD_H

#include <iostream>

class Card
{
public:
    // Constructor
    Card();
    Card(unsigned);

    // Destructor
    ~Card();

    /****** Methods *****/
    void show();
    unsigned get_value();

private:
    unsigned m_value;
};


#endif // CARD_H 