#include <stdio.h>

int main(int argc, char *argv[]) {
  //argc is the argument Count and is the number of arguments passed to the application
  //argv is the array of arguments given to the application
  // the first entry in the argv array is the name of the application
  // the rest of the entires are command line input
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
