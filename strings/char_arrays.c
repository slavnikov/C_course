#include <stdio.h>
#include <string.h>

int my_strlen(char string[]);

int main(int argc, char *argv[]) {
  char *input = argv[1];
  if(input == NULL) {
    printf("%s\n", "No input detected.");
    return 0;
  }

  printf("The input is \"%s\".\n", input);

  int str_length = strlen(input);
  int myf_length = my_strlen(input);

  printf("Standard answer is: %d\n", str_length);
  printf("My answer is: %d\n", myf_length);
  printf("The function 'my_strlen' %s\n", str_length == myf_length ? "worked!" : "did not work :(");


  return 0;
}

int my_strlen(char string[]) {
  int length = 0;

  while(string[length] != '\0') {
    length++;
  }

  return length;
}
