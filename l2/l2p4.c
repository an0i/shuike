#include <stdio.h>
#define F 14

void putnc(int n, int ch) {
  for (int i = 1; i <= n; ++i)
    putchar(ch);
}

int main() {
  int a;
  scanf("%d", &a);

  for (int i = 1; i <= a; ++i) {
    putnc(F - i, ' ');
    putnc(2 * i - 1, '*');
    putchar('\n');
  }

  return 0;
}