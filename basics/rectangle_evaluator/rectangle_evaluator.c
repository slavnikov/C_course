#include <stdio.h>

int main() {
  int width;
  int height;

  printf("\nInput a rectangle width:\n > ");
  scanf("%i", &width);
  printf("\nInput a rectangle height:\n > ");
  scanf("%i", &height);

  int perimeter = 2 * width + 2 * height;
  int area = width * height;

  printf("\nThe perimeter of the reactangle is %i.\n", perimeter);
  printf("The area of the reactangle is %i.\n\n", area);

  return 0;
}
