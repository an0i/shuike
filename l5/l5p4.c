#include <stdio.h>

int main() {
  int sum = 0;

  int i, count;
  for (i = 2, count = 0; i <= 200; i += 2) {
    if (i % 7 == 0 || i % 17 == 0) {
      sum += i;
      printf(++count == 5 ? (count = 0, "%6d\n") : "%6d", i);
    }
  }

  printf(count == 5 ? "sum=%d\n" : "\nsum=%d\n", sum);

  return 0;
}