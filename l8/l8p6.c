#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);

  int count = 0;
  while (a > 0) {
    if (a % 10 == 2)
      ++count;
    a /= 10;
  }

  printf("count=%d\n", count);

  return 0;
}