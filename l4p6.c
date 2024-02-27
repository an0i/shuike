#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);

  for (int i = 1; i <= a; ++i) {
    int sum = 0;
    for (int fac = 1; fac < i; ++fac) {
      if (i % fac == 0)
        sum += fac;
    }
    if (i == sum)
      printf("%d\n", i);
  }

  return 0;
}