#include <math.h>
#include <stdio.h>

double distance(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
  double x1, y1, x2, y2, x3, y3, a, b, c, primeter, area;
  scanf("%lf,%lf%lf,%lf%lf,%lf", &x1, &y1, &x2, &y2, &x3, &y3);

  a = distance(x1, y1, x2, y2);
  b = distance(x1, y1, x3, y3);
  c = distance(x2, y2, x3, y3);

  if (!(a + b > c && a + c > b && b + c > a)) {
    printf("Impossible\n");
    return 0;
  }

  primeter = a + b + c;
  area = sqrt(primeter / 2 * (primeter / 2 - a) * (primeter / 2 - b) *
              (primeter / 2 - c));

  printf("primeter=%.2f,area=%.2f\n", primeter, area);

  return 0;
}