// Class definition for card deck
#ifndef CARD_DECK_H
#define CARD_DECK_H

#include <iostream>

class CardDeck
{
public:
    // Constructor
    CardDeck();

    // Destructor
    ~CardDeck();

    /***** Methods *****/
    // Shuffle card deck
    void shuffle();

    // Draw a card from deck
    void draw();

};


#endif // CARD_DECK_H
