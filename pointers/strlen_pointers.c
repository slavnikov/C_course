//my_strlen has to take a constant pointer
//my_strlen must use pointer arithemtic

#include <stdio.h>

int my_strlen(const char *string);

int main(int argc, char const *argv[]) {
  char input[100];

  printf("%s\n", "Enter a word:");
  scanf("%s", input);

  printf("The length of the input string was: %d\n", my_strlen(input));
  return 0;
}

int my_strlen(const char *string) {
  char *string_end = string;


  while(*string_end) { //will terminate when string_end points to the address of the /0 (null terminator) char, a.k.a. while(*string_end != '/0')
    string_end++;
  }

  return string_end - string; //subtaction of two addresses provides the distance between them;
}
