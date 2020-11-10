#include <stdbool.h>
#include <stdio.h>

void power_bang(int *input, int power);
bool test_power_bang(void);

int main(int argc, char const *argv[]) {
  if(test_power_bang()) {
    printf("%s\n", "The function works.");
  } else {
    printf("%s\n", "The function does NOT work.");
  }

  return 0;
}

void power_bang(int *input, int power) {
  int init_value = *input;

  if (power == 0) {
    *input = 1;
  } else if (power > 0) {
    for(; power > 1; power--) {
      *input *= init_value;
    }
  } else {
    *input = 0;
  }
}

bool test_power_bang() {
  bool pass = true;
  int five = 5;
  int hundred = 100;
  int three = 3;
  int two = 2;
  int *pTwo = &two;

  power_bang(&five, 3);
  power_bang(pTwo, 5);
  power_bang(&hundred, 0);
  power_bang(&three, -2);

  if(five != 125) pass = false;
  if(two != 32) pass = false;
  if(hundred != 1) pass = false;
  if(three != 0) pass = false;

  return pass;
}
