#include <stdio.h>

int main(void) {
  float a, b, perimeter, area;

  printf("Enter lenght a: ");
  scanf("%f", &a);
  printf("Enter lenght b: ");
  scanf("%f", &b);

  perimeter = (a + b) * 2.0F;
  area = a * b;

  printf("Perimeter: %.2f\n", perimeter);
  printf("Area: %.2f\n", area);

  return 0;
}