#include <stdio.h>

void dtob(int d) {
  if (d == 0)
    return;
  dtob(d / 2);
  printf("%d", d % 2);
}

int main() {
  int d;
  scanf("%d", &d);
  dtob(d);
}
