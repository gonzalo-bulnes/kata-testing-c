/*
 * Program to count cards.
 * This code is part of the Heah First C book by David and Dawn Grifiths.
 * See http://shop.oreilly.com/product/0636920015482.do
 */

#include <stdio.h>
#include <stdlib.h>

/* Returns the card value */
int card_value(char card_name[]);

int card_value(char card_name[]) {

    switch(card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
      return 10;
    case 'A':
      return 11;
    default:
      return atoi(card_name);
    }
}
