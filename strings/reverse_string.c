#include <stdio.h>

void print_reverse(const char string[]);

int main(int argc, char const *argv[]) {
  const char *input = argv[1];
  if(input == NULL) {
    printf("%s\n", "No input detected.");
    return 1;
  }

  print_reverse(&input[0]);
  printf("\n");
  return 0;
}

void print_reverse(const char string[]) {
  if(string[0] == '\0') {
    return;
  }
  print_reverse(&string[1]);
  printf("%c", string[0]);
}
