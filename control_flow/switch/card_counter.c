#include <stdio.h>
#include <stdbool.h>

#define BLACKJACK 21

int main(int argc, char const *argv[]) {
  int number_of_cards;
  int number_of_aces = 0;
  int total_score = 0;
  int idx = 0;
  char card;

  printf("How many cards are you holding?\n> ");
  scanf("%i", &number_of_cards);

  while(idx < number_of_cards) {
    bool bad_entry = false;
    printf("\nWhat is your card #%i?\n>", idx + 1);
    scanf(" %c", &card);

    switch (card) {
      case 'K':
      case 'k':
      case 'Q':
      case 'q':
      case 'J':
      case 'j':
      case '0':
        total_score += 10;
        break;
      case '2':
        total_score += 2;
        break;
      case '3':
        total_score += 3;
        break;
      case '4':
        total_score += 4;
        break;
      case '5':
        total_score += 5;
        break;
      case '6':
        total_score += 6;
        break;
      case '7':
        total_score += 7;
        break;
      case '8':
        total_score += 8;
        break;
      case '9':
        total_score += 9;
        break;
      case 'A':
      case 'a':
        total_score += 11;
        number_of_aces += 1;
        break;
      default:
        printf("That's not a card! (plz enter 0 for a 10)");
        bad_entry = true;
    }

    while(number_of_aces > 0 && total_score > BLACKJACK) {
      total_score -= 10;
      number_of_aces -= 1;
    }

    if(!bad_entry){
      idx++;
    }
  }

  printf("----------------------------------\n");

  if(total_score == BLACKJACK)
    printf("Your score is %i. BLACKJACK!!!\n", total_score);
  else if (total_score > BLACKJACK)
    printf("Your score is %i. You're BUST!!!\n.", total_score);
  else
    printf("Your score is %i.\n", total_score);

  printf("----------------------------------\n");
  return 0;
}
