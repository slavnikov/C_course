#include <stdio.h>

int main() {
  //variable declaration is required
  char f, a, l, o, u, t;
  //followed by initialization
  f = 'f', a = 'a';
  l = 'l';
  o = 'o';
  u = 'u';
  t = 't';

  //declaration and initialization can happen at the same time
  int fallout_3_vault = 101;
  int fallout_76_vault, fallout_nv_vault = 21;

  fallout_76_vault = 76;

  printf("%i\n%i\n%i\n", fallout_3_vault, fallout_nv_vault, fallout_76_vault);
  printf("%c%c%c%c%c%c%c\n", f, a, l, l, o, u, t);
  return 0;
}
