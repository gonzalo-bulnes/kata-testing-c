/*
 * Test the program to count cards.
 * See http://www.jera.com/techinfo/jtns/jtn002.html
 */

#include <stdio.h>
#include <stdlib.h>

#include "minunit.h"
#include "count_cards.h"

int tests_run = 0;

static char * test_known_card_values() {
    mu_assert("ERROR: expected card A value to be 11", card_value("A") == 11);
    mu_assert("ERROR: expected card K value to be 10", card_value("K") == 10);
    mu_assert("ERROR: expected card Q value to be 10", card_value("Q") == 10);
    mu_assert("ERROR: expected card J value to be 10", card_value("J") == 10);
    mu_assert("ERROR: expected card 10 value to be 10", card_value("10") == 10);
    mu_assert("ERROR: expected card 9 value to be 9", card_value("9") == 9);
    mu_assert("ERROR: expected card 6 value to be 6", card_value("6") == 6);
    mu_assert("ERROR: expected card 1 value to be 1", card_value("1") == 1);
    return 0;
}

static char * all_tests() {
    mu_run_test(test_known_card_values);
    return 0;
}

int main(int argc, char **argv) {
    char *result = all_tests();
    if (result != 0) {
        printf("%s\n", result);
    }
    else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", tests_run);

    return result != 0;
}
