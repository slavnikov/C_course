#include <stddef.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  //pointers are declared by indicating the type to the memory address of which the pointer will ... point
  char *pChar; //pointer to a char type
  double doubleValue, *pDouble; //declares one double and one double pointer
  float *pFload = NULL; //guarantees that the pointer will not point to anything in memory
  int *pNumber = NULL; // pointer to an integer type

  //the value of a pointer is represented intenally as an integer
  //however it cannot (always) be manipulated like an integer
  //%p is the type specifier for pointers


  //the address-of operator is '&' and extracts the pointer of the operand variable
  int number = 9;
  pNumber = &number;


  //the indirection or dereference operator '*' accesses the value at a given pointer
  if(*pNumber == 9) {
    printf("The memory address %p contains the value %i.\n", pNumber, *pNumber);
    printf("A pointer to an int type occupies %d bytes of memory.\n", (int)sizeof(pNumber));
    printf("The actual address of the pointer is %p\n", &pNumber);
  }

  return 0;
}
