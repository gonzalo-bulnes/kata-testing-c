default: count_cards count_cards_test

count_cards: src/count_cards.c
	gcc src/count_cards.c -o bin/count_cards -Isrc -Wall -pedantic

count_cards_test: src/count_cards_test.c src/count_cards.c
	gcc src/count_cards_test.c -o bin/count_cards_test -Isrc -Ilib -Wall -pedantic
