#include <stdio.h>

int main(int argc, char const *argv[]) {
  for (int i = 0; i < 10; i++) {
    printf("%i\n", i);
  }

  printf("\n");

  for (int i = 0; i < 10; ++i) {
    printf("%i\n", i);
  }

  //the contents of the parens are 3 expressions
  // the first expression executes ONE TIME at the beginning of the loop
  // the second expression must evaluate to true or false and is run at the beginning of EACH loop to determine if it should continue or end
  // the third expression is executed at the END of EVERY loop cycle

  //below observe the difference between i++ and ++i
  printf("\n");

  int sum = 0;
  for (int i = 0; i < 10; sum += i++) {
    printf("i   = %i\n", i);
    printf("sum = %i\n", sum);
  }

  printf("\n");

  sum = 0;
  for (int i = 0; i < 10; sum += ++i) {
    printf("i   = %i\n", i);
    printf("sum = %i\n", sum);
  }

  return 0;
}
