#include "stdio.h"
/*
          f(2,3) = 2 - 4 + 8
    - 2 * f(2,3) =   - 4 + 8 - 16
- 2 * f(2,3) + 2 = 2 - 4 + 8 - 16

          f(2,4) = 2 - 4 + 8 - 16

          f(2,n) = 2 - 2 * f(2,n-1)
          f(x,n) = x - x * f(x,n-1)
*/
double f(double x, int n) {
  // 1
  if (n == 1) {
    return x;
  }
  return x - x * f(x, n - 1);
}
int main() {
  double x, a;
  int n;
  scanf("%lf,%d", &x, &n);
  a = f(x, n);
  printf("a=%f\n", a);
  return 0;
}