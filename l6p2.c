#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  double x, min, max;
  scanf("%lf", &x);
  min = max = x;
  for (int i = 1; i < n; ++i) {
    scanf("%lf", &x);
    if (x < min)
      min = x;
    if (x > max)
      max = x;
  }

  printf("%.2f\n", max - min);

  return 0;
}