#include <stddef.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  //void* pointers can contain the address of any data item
  //void* can be userd a parameter or a return value of a function
  //void* must be case first before it can be dereferenced

  int x_int = 10;
  char  x_char = 'x';
  void *ptr = NULL;

  ptr = &x_int;
  int x_int_two = *(int*)ptr; //(int*) casts ptr to an integer pointer while * derefences it
  printf("%d\n", x_int_two);

  ptr = &x_char;
  char x_char_two = *(char*)ptr;
  printf("%c\n", x_char_two);

  return 0;
}
