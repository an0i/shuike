#include <stdio.h>

double fac(int n) {
  double f;
  if (n == 1)
    f = 1; // 1
  else
    f = n * fac(n - 1); // 2
  return f;
}

int main() {
  double s = 0;
  int i, n;
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
    s = s + fac(i); // 3
  printf("s=%.2lf", s);
}