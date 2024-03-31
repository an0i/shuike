#include "stdio.h"
double power(double x, int n) {
  // 1
  if (n == 1)
    return x;
  if (n == 0)
    return 1;
  return x * power(x, n - 1);
}
int main() {
  double x, a;
  int n;
  scanf("%lf,%d", &x, &n);
  a = power(x, n);
  printf("a=%f\n", a);
  return 0;
}