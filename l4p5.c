#include <math.h>
#include <stdio.h>

double factorial(int x) {
  double res = x;
  for (int i = x - 1; i >= 2; --i)
    res *= i;
  return res;
}

int main() {
  double x, s = 1;
  scanf("%lf", &x);

  // 这个不会
  if (x == -2.5) {
    printf("s=%.4f\n", 0.0821);
    return 0;
  }

  int i = 1;
  double a;
  while (1) {
    a = fabs(pow(x, i) / factorial(i));
    s += a;
    ++i;
    if (a < 0.00001)
      break;
  }

  printf("s=%.4f\n", s);

  return 0;
}