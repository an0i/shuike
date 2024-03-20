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
  scanf("%d", &a);
  b = a + 10;

  for (int i = a; i <= b; i += 2) {
    for (int j = 2; j <= i / 2; ++j) {
      if (isPrime(j) && isPrime(i - j)) {
        printf("%d=%d+%d\n", i, j, i - j);
        break;
      }
    }
  }

  return 0;
}