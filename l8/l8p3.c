#include <stdio.h>

int fib(int n) {
  if (n <= 2)
    return 1;
  return fib(n - 2) + fib(n - 1);
}

int main() {
  int a, b;
  scanf("%d,%d", &a, &b);

  int sum = 0;
  for (int i = a; i <= b; ++i) {
    sum += fib(i);
  }

  printf("sum=%d\n", sum);

  return 0;
}