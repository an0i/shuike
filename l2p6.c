#include <stdio.h>
#include <math.h>

int main() {
  double x, y, a, b, c;
  scanf("%lf%lf%lf%lf%lf", &x, &y, &a, &b, &c);

  double m = fabs(a * x + b * y + c);
  double n = sqrt(pow(a, 2) + pow(b, 2));

  printf("%f\n", m / n);

  return 0;
}