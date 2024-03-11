#include <stdio.h>

int main() {
  double a;
  scanf("%lf", &a);

  if (a < 1) {
    printf("y=%.2f\n", a);
  } else if (a >= 10) {
    printf("y=%.2f\n", 3 * a - 11);
  } else {
    printf("y=%.2f\n", a - 1);
  }

  return 0;
}