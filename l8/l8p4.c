#include <stdio.h>

int isPrime(int n) {
  if (n == 1)
    return 0;
  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int main() {
  int a, b;
  scanf("%d,%d", &a, &b);

  int count = 0;
  int sum = 0;
  for (int i = a; i <= b; ++i) {
    if (isPrime(i)) {
      ++count;
      sum += i;
    }
  }

  printf("count=%d,sum=%d\n", count, sum);

  return 0;
}