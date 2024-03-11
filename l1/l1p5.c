#include <stdio.h>

int even(int n) { return n % 2 != 0; }

int main() {
  int n, m, a, b, sum;
  scanf("%d %d", &n, &m);

  if (n == m) {
    sum = even(n) ? n * 2 : 0;
    printf("%d\n", sum);
    return 0;
  }

  a = even(n) ? n : n + 1;
  b = even(m) ? m : m - 1;
  sum = (a + b) * (b - a + 2) / 4;

  printf("%d\n", sum);
  return 0;
}