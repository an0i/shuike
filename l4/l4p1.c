#include <stdio.h>

int main() {
  int n, x = 1;
  scanf("%d", &n);

  for (int i=1;i<n;++i) {
    x += 1;
    x *= 2;
  }

  printf("Totals=%d\n", x);

  return 0;
}