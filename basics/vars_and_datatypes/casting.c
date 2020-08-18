#include <stdio.h>

int main(int argc, char const *argv[]) {
  //when casting floats to integers, the decimal is truncated
  int x = 0;
  float f = 3.14;
  x = f;
  printf("3.14 cast to a float: %i\n", x); //=> 3

  //casting an int to a float results in no change

  //when doing int arithmetic, any decimal portion is discarded
  int seven = 7;
  int two = 2;
  int result_int = seven / two;
  float result_float = seven / two;

  printf("7 / 2 as an int: %i\n", result_int);
  printf("7 / 2 as a float: %f\n", result_float);

  //arithmetic done with at least one float will result in a float
  float two_f = 2;
  float true_result = seven / two_f;

  printf("7 / 2.0 as a float: %f\n", true_result);

  //casting can force one data type to become another
  float another_true_result = (float)seven / (float)two;
  printf("(float)7 / (float)2 as a float: %f\n", another_true_result);

  int fifty = (int)25.99 + (int)25.99;
  printf("(int)25.99 + (int)25.99 as an int: %i\n", fifty);
  return 0;
}
