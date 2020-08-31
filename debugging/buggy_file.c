#include <stdio.h>
#include <stdlib.h>

long find_factorial(long input);

int main(int argc, char const *argv[]) {
  const char *cmd_ln_input = argv[2];
  long input;
  long factorial;
  char *foo;

  // if(cmd_ln_input == NULL) {
  //   printf("Please enter a number for factorial calculation >");
  //   scanf("%ld\n", &input);
  // }
  // else {
    input = strtol(cmd_ln_input, &foo, 10);
  // }

  // factorial = find_factorial(input);
  input = find_factorial(input);

  printf("The factorial of %ld is %ld\n", input, factorial);
  return 0;
}

long find_factorial(const long input) {
  if(input == 1) {
    return 1;
  } else {
    return input * find_factorial(input + 1);
  }
}
