#include <stdio.h>

int main() {
  int a = 0b00111100;
  int b = 0b10101010;

  if((a & b) == 0b00101000) {
    printf("Got the bitwise AND right.\n");
  }

  if((a | b) == 0b10111110) {
    printf("Got the bitwise OR right.\n");
  }

  return 0;
}
