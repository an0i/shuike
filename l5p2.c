#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);

  int one, two, five, count = 0;
  for (five = 1; five <= a / 5; ++five) {
    for (two = 1; two <= a / 2; ++two) {
      one = a - 5 * five - 2 * two;
      if (one >= 1)
        ++count;
    }
  }

  printf("count=%d\n", count);

  return 0;
}