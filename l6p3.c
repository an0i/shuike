#include <stdio.h>

int a(int n) {
  if (n == 1)
    return 2;
  return a(n - 1) + 2 * (n - 1);
}

int main() {
  int n;
  scanf("%d", &n);

  printf("%d\n", a(n));

  return 0;
}