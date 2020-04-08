#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i;
  char c;
  long l;
  long long ll;
  double d;
  long double ld;

  printf("The size of an int %zd bytes\n", sizeof(i));
  printf("The size of an char %zd bytes\n", sizeof(c));
  printf("The size of an long %zd bytes\n", sizeof(l));
  printf("The size of an long long %zd bytes\n", sizeof(ll));
  printf("The size of an double %zd bytes\n", sizeof(d));
  printf("The size of an long double %zd bytes\n", sizeof(ld));

  return 0;
}
