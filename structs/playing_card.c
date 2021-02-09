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
  struct PlayingCard *cards[52];
};

struct CardHand {
  unsigned char card_count;
  struct PlayingCard **cards;
};

char* suitToString(enum Suit suit);
void fillDeck(struct Deck *deck);
void showCard(struct PlayingCard *cardPtr);
void showHand(struct CardHand *card_handPtr);
void showDeck(struct Deck *deck);

int main(int argc, char const *argv[]) {
  struct PlayingCard a_card;
  struct PlayingCard b_card = {HEARTS, '5'};
  struct CardHand a_hand;
  struct Deck a_deck;
  struct PlayingCard *a_cardPtr;
  struct PlayingCard three_cards[3];
  struct PlayingCard five_cards[5] = {{SPADES, 'A'}, {HEARTS, 'Q'}, [3] = {CLUBS, '6'}}; // SETS THE FIRST, SECOND, AND FOURTH THINGS IN THE ARRAY

  a_card.suit = DIAMONDS;
  a_card.value = '5';

  a_cardPtr = &a_card;
  showCard(a_cardPtr);

  a_hand.card_count = 2;
  a_hand.cards = malloc(2 * sizeof(struct PlayingCard));
  a_hand.cards[0] = a_cardPtr;
  a_hand.cards[1] = &b_card;
  showHand(&a_hand);

  fillDeck(&a_deck);
  showDeck(&a_deck);

  free(a_hand.cards);
  for (short i = 0; i < 52; i++) {
    free(a_deck.cards[i]);
  }
  return 0;
}

void showHand(struct CardHand *card_handPtr) {
  for (unsigned char i = 0; i < card_handPtr->card_count; i++) {
    showCard(card_handPtr->cards[i]);
  }
}

void showDeck(struct Deck *deckPtr) {
  for (unsigned char i = 0; i < 52; i++) {
    showCard(deckPtr->cards[i]);
  }
}

void showCard(struct PlayingCard *cardPtr) {
  char *suit_string = suitToString((*cardPtr).suit);    //(*ptr).attr is one way to travere a sturct pointer to an attribute value

  printf("%c of %s\n", cardPtr->value, suit_string);  //ptr->attr is another way to traverse a struct pointer to an attribute value
}

void fillDeck(struct Deck *deck) {
  unsigned char card_idx = 0;

  for (enum Suit suit = SPADES; suit <= DIAMONDS; suit++) {
    for (short val = 2; val <= 14; val++) {
      struct PlayingCard card_to_add = {suit};
      struct PlayingCard *card_to_add_ptr = malloc(sizeof(struct PlayingCard));

      switch (val) {
        case 10:
          card_to_add.value = 'X';
          break;
        case 11:
          card_to_add.value = 'J';
          break;
        case 12:
          card_to_add.value = 'Q';
          break;
        case 13:
          card_to_add.value = 'K';
          break;
        case 14:
          card_to_add.value = 'A';
          break;
        default:
          card_to_add.value = (char) val + '0';
      }
      *card_to_add_ptr = card_to_add;
      deck->cards[card_idx] = card_to_add_ptr;
      card_idx++;
    }
  }
}

char* suitToString(enum Suit suit) {
  char *suit_string;

  switch (suit) {
    case SPADES:
      suit_string = "SPADES";
      break;
    case HEARTS:
      suit_string = "HEARTS";
      break;
    case CLUBS:
      suit_string = "CLUBS";
      break;
    case DIAMONDS:
      suit_string = "DIAMONDS";
      break;
    default:
      suit_string = "???";
      break;
  }
  return suit_string;
}
