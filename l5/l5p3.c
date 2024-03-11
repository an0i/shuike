#include <stdio.h>
#define F 30

void putnc(int n, int ch) {
  for (int i = 1; i <= n; ++i)
    putchar(ch);
}

// 递归实现
void pp(int a, int i) {
    if (i == a + 1) return;
    putnc(F - i, ' ');
    putnc(2 * i - 1, '0' + i);
    putchar('\n');
    pp(a, i + 1);
    if (i == a) return;
    putnc(F - i, ' ');
    putnc(2 * i - 1, '0' + i);
    putchar('\n');
}

int main() {
  int a = 7;

  // pp(a, 1);

  for (int i = 1; i <= a; ++i) {
    putnc(F - i, ' ');
    putnc(2 * i - 1, '0' + i);
    putchar('\n');
  }

  for (int i = a - 1; i >= 1; --i) {
    putnc(F - i, ' ');
    putnc(2 * i - 1, '0' + i);
    putchar('\n');
  }

  return 0;
}