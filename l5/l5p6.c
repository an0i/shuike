#include <stdio.h>

void putnc(int n, int ch) {
  for (int i = 1; i <= n; ++i)
    putchar(ch);
}

int main() {
  int a, n;
  scanf("%d,%d", &a, &n);

  int sum = 0;
  for (int i = 1; i <= n; ++i) {
    int nnn = 0;
    for (int j = 1; j <= i; ++j) {
      nnn *= 10;
      nnn += a;
    }
    sum += nnn;
  }

  for (int i = 1; i < n; ++i) {
    putnc(i, '0' + a);
    putchar('+');
  }
  putnc(n, '0' + a);
  printf("=%d\n", sum);

  return 0;
}