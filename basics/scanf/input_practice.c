#include <stdio.h>

int main() {
  char str[100];
  int i;

  printf("Plese input a string and an integer:");
  scanf("%s %d", str, &i);
  printf("\nYou enetered: %s::::::::::%d\n", str, i);

  return 0;
}
