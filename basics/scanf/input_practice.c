#include <stdio.h>

int main() {
  // all input come in as string, even if they are inters
  // format specifiers can be used to convert input to other data types

  /*
  * scanf("%s\n", );
  *  returns the number of arguemnts it reads
  *  multiple inputs are dividied by whitespaces, newlines, and tabs
  *  basic data types must be preceeded w/ & to indicate that it is a pointer
  *  complext data types don't need a &
  */
  char my_string[100];
  int integer;
  int input_count;
  double big_num;

  printf("Plese input an integer and a string >");
  input_count = scanf("%d %s %lf", &integer, my_string, &big_num);
  printf("\nYou enetered: %d::::::::::%s::::::::%lf\n", integer, my_string, big_num);
  printf("Num of inputs: %d\n", input_count);

  return 0;
}
