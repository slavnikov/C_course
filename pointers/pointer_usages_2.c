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

  number = 10; // not allowed    << chnages the value under the variable name
  *pNumber = 87; // allowed      << change the value at the pointed to address
  pNumber = &number2; // allowed << changes the address being pointed to
////////////////////////////////////////////////////////////////////////////////
  char a = 'a';
  char b = 'b';
  char *const pChar = &a;

  a = 'c'; // allowed        << chnages the value under the variable name
  b = 'd'; // allowed        << chnages the value under the variable name
  pChar = &b; // not allowed << chnage the address being pointed to
  *pChar = b; // allowed     << change the value at the address
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
