#include <stddef.h>

int main(int argc, char const *argv[]) {
////////////////////////////////////////////////////////////////////////////////
  long value = 777L;
  long value2 = 111L;
  const long *pValue = &value;

  value = 999L; // allowed
  *pValue = 111L; // not allowed
  pValue = &value2; // allowed
////////////////////////////////////////////////////////////////////////////////
  const int number = 9;
  int number2 = 2;
  int *pNumber = &number;

  number = 10; // not allowed
  *pNumber = 87; // allowed
  pNumber = &number2; // allowed
////////////////////////////////////////////////////////////////////////////////
  char a = 'a';
  char b = 'b';
  char *const pChar = &a;

  a = 'c'; // allowed
  b = 'd'; // allowed
  pChar = &b; // not allowed
////////////////////////////////////////////////////////////////////////////////
  const char c  = 'c';
  const char d = 'd';
  const char *const pC = &c;

  c = 'e'; // not allowed
  *pC = 'f'; // not allowed
  pC = &d; // not allowed
////////////////////////////////////////////////////////////////////////////////
  return 0;
}
