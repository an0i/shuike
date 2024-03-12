#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  double a[n];
  for (int i = 0; i < n; ++i) {
    scanf("%lf", &a[i]);
  }

  int pos = 0;
  for (int i = 1; i < n; ++i) {
    if (a[i] > a[pos])
      pos = i;
  }

  int temp = a[0];
  a[0] = a[pos];
  a[pos] = temp;

  for (int i = 0; i < n; ++i)
    printf(i != n - 1 ? "%.6lf  " : "%.6lf\n", a[i]);

  return 0;
}
