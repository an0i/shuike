#include <stdio.h>

void fire(int n) {
  if (n == 0)
    return;
  fire(n / 2);
  printf("%d", n % 2);
}

int main() {
  int n;
  scanf("%d", &n);
  fire(n);
  putchar('\n');
}