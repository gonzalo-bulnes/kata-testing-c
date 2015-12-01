/*
 * Program to count cards.
 * This code is part of the Heah First C book by David and Dawn Grifiths.
 * See http://shop.oreilly.com/product/0636920015482.do
 */

#include <stdio.h>
#include <stdlib.h>

/* Returns the card value */
int card_value(char card_name[]);

int main() {

    int val;

    char card_name[3];
    puts("Enter the card name: ");
    scanf("%2s", card_name);
    val = card_value(card_name);
    printf("The card value is %i\n", val);
    return 0;
}

int card_value(char card_name[]) {

    int val = 0;

    if (card_name[0] == 'K') {
        val = 10;
    } else if (card_name[0] == 'Q') {
        val = 10;
    } else if (card_name[0] == 'J') {
        val = 10;
    } else if (card_name[0] == 'A') {
        val = 11;
    } else {
        val = atoi(card_name);
    }

    return val;
}