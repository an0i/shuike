#include <stdio.h>

int main() {
  int x, y, z, t;
  scanf("%d%d%d", &x, &y, &z);
  if (x > y) {
    t = x;
    x = y;
    y = t;
  }
  if (x > z) {
    t = x;
    x = z;
    z = t;
  }
  if (y > z) {
    t = y;
    y = z;
    z = t;
  }
  printf("small to big: %d %d %d\n", x, y, z);
  return 0;
}