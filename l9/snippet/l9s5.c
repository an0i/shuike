#include "stdio.h"
int fib(int n) {
  // 1
  if (n == 0 || n == 1)
    return n;
  return fib(n - 2) + fib(n - 1);
}

int main() {
  int n;
  scanf("%d", &n);
  printf("NO%d=%d\n", n, fib(n));
  return 0;
}