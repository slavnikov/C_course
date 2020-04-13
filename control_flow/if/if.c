#include <stdio.h>

int main(int argc, char const *argv[]) {
  int number_to_test, remainder;

  while(1) {
    printf("Enter a number to determine if it is even or odd (0 to exit):\n>");
    scanf("%i", &number_to_test);

    if (number_to_test == 0) {
      return 0;
    }
    remainder = number_to_test%2;

    if(remainder == 0) {
      printf("%i is even.\n\n", number_to_test);
    } else {
      printf("%i is odd.\n\n", number_to_test);
    }
  }
}
