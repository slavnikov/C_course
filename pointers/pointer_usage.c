#include <stddef.h>
#include <stdio.h>

void add_bang(long *value, long addon);

int main(int argc, char const *argv[]) {
  long num1 = 0L;
  //GDB: watch num1 <<< will trigger when the value of the variable num1 is changed
  long num2 = 0L;
  long *pNum = NULL;

  pNum = &num1;

  num1 = 5L;
  *pNum = 2L;
  *pNum = 10L;
  num1 = 17L;

  add_bang(pNum, 20);
  add_bang(pNum, 30);

  return 0;
}

void add_bang(long *value, long addon) {
  *value += addon;
}
