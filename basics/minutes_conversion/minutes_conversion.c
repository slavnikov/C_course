#include <stdio.h>

int main(int argc, char const *argv[]) {
  int minutesEntered = 0;
  double years;
  double days;
  double minutesPerYear = 60 * 24 * 365;

  printf("Please enter thenumber of years: \n>");
  scanf("%d", &minutesEntered);

  years = minutesEntered / minutesPerYear;
  days = minutesEntered / 60.0 / 24.0;

  printf("%f\n", days);
  printf("%f\n", years);
  return 0;
}
