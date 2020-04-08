#include <stdio.h>
#include <stdbool.h>

int main() {
  //variable declaration is required
  char f, a, l, o, u, t;
  //followed by initialization
  f = 'f', a = 'a';
  l = '1';
  o = '0';
  u = 'u';
  t = 't';

  //declaration and initialization can happen at the same time
  int fallout_3_vault = 101;
  int fallout_76_vault, fallout_nv_vault = 21;

  fallout_76_vault = 76;

  printf("%i\n%i\n%i\n", fallout_3_vault, fallout_nv_vault, fallout_76_vault);
  printf("%c%c%c%c%c%c%c\n", f, a, l, l, o, u, t);

  /*
   int - may take b/w 32 and 64 bits of of memory (4-8 bytes)
       - is signed (unless unsigned)
       - can store hexidecimals 0xFFEF0D
       - no commas are allowed
       - longer than a short
       - shorter than a long which is shorter than a longlong
  */
  /*
   float - flating points
         - is signed
         - 125.8
         - 17.4e2
  */
  /*
   double - bigger than a float
          - shorter than long doubles
  */
  /*
    _Bool - 0 or 1
          - true or false
  */
  /*
    Enum - specified a datatype of a specified set of valid values
  */

  enum Game {
    MORROWIND = 3,
    OBLIVION,
    SKYRIM
  };

  enum Game game = SKYRIM;
  int one = 1;
  float one_point_three = 1.3;
  double one_billion = 1e9;
  bool not_false = true;
  char newline = '\n';
  char ding = '\a';

  if(game == SKYRIM && not_false) {
    printf("%f%c", one_point_three, newline);
  }
  if(game == 5 && one == 1) {
    printf("%f%c", one_billion, newline);
  }

  printf("%c", ding);
  return 0;
}
