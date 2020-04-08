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

  if((a ^ b) == 0b10010110) {
    printf("Got the bitwise XOR right.\n");
  }

  if(~a == 0b11111111111111111111111111000011) {
    printf("Got the bitwsie NEGATION right.\n");
  }

  if((a << 2) == 0b11110000) {
    printf("Got the bitwise LEFT SHIFT right.\n");
  }

  if((a >> 2) == 0b00001111) {
    printf("Got the bitwise RIGHT SHIFT right.\n");
  }

  return 0;
}
