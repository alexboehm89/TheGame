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
    Card draw();
    void show();
    unsigned get_number_of_cards();

private:

    /***** Member *****/
    unsigned m_number_of_cards;
    Card m_card;
    std::vector<unsigned> m_cards;
    std::vector<unsigned> m_curent_cards;

};


#endif // DECK_H
