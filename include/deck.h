// Class definition for card deck
#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

#include "card.h"

class Deck
{
public:

    // Constructor
    Deck(unsigned);

    // Destructor
    ~Deck();

    /***** Methods *****/
    void shuffle();
    std::vector<Card> draw(unsigned);
    void show();
    unsigned get_number_of_cards();

private:

    /***** Member *****/
    std::vector<Card> m_cards;

};


#endif // DECK_H
