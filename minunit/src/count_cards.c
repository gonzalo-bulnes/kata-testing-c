/*
 * Program to count cards.
 * This code is part of the Heah First C book by David and Dawn Grifiths.
 * See http://shop.oreilly.com/product/0636920015482.do
 */

#include <stdio.h>
#include <stdlib.h>

#include "count_cards.h"

int main() {

    int val;

    char card_name[3];
    puts("Enter the card name: ");
    scanf("%2s", card_name);
    val = card_value(card_name);
    printf("The card value is %i\n", val);
    return 0;
}
