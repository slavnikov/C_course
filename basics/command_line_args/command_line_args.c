#include <stdio.h>

int main(int argc, char *argv[]) {
  char *first_argument = argv[0];
  char *adjective = argv[1];

  printf("Number of arguments: %i\n", argc);
  printf("Running: %s\n\n", first_argument);

  if (adjective == NULL) {
    printf("Hello classic world!\n\n");
  } else {
    printf("Hello %s world!\n\n", adjective);
  }

  return 0;
}
