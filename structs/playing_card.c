#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Suit {
  SPADES,
  HEARTS,
  CLUBS,
  DIAMONDS
};

struct PlayingCard {
  enum Suit suit;
  char value;
};

struct Deck {
  struct PlayingCard cards[52];
};

struct CardHand {
  unsigned char card_count;
  struct PlayingCard *cards;
};

void showCard(struct PlayingCard *cardPtr);
char* suitToString(enum Suit suit);

int main(int argc, char const *argv[]) {
  struct PlayingCard a_card;
  struct PlayingCard *a_cardPtr;

  a_card.suit = DIAMONDS;
  a_card.value = '5';

  a_cardPtr = &a_card;
  showCard(a_cardPtr);

  struct PlayingCard three_cards[3];
  struct PlayingCard five_cards[5] = {{SPADES, 'A'}, {HEARTS, 'Q'}, [3] = {CLUBS, '6'}}; // SETS THE FIRST, SECOND, AND FOURTH THINGS IN THE ARRAY


  return 0;
}

void showCard(struct PlayingCard *cardPtr) {
  char *suit_string = suitToString((*cardPtr).suit);    //(*ptr).attr is one way to travere a sturct pointer to an attribute value

  printf("%c of %s\n", cardPtr->value, suit_string);  //ptr->attr is another way to traverse a struct ointer to an attribute value
  free(suit_string);
}

char* suitToString(enum Suit suit) {
  // char *suit_string = calloc(9, sizeof(char));
  char *suit_string;

  switch (suit) {
    case SPADES:
    // strcpy(suit_string, "SPADES");
      suit_string = "SPADES";
      break;
    case HEARTS:
    // strcpy(suit_string, "HEARTS");
      suit_string = "HEARTS";
      break;
    case CLUBS:
    // strcpy(suit_string, "CLUBS");
      suit_string = "CLUBS";
      break;
    case DIAMONDS:
    // strcpy(suit_string, "DIAMONDS");
      suit_string = "DIAMONDS";
      break;
    default:
      // strcpy(suit_string, "???");
      suit_string = "???";
      break;
  }
  return suit_string;
}
