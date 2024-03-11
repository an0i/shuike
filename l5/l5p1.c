#include <stdio.h>

int main() {
  //   5x+3y+z/3=100
  //   x+y+z=100
  //   x=4t
  //   y=25-7t
  //   z=75+3t
  //   t>=1/4      t<=24/7

  int i, j, chick;
  for (i = 1; i < 20; ++i) {
    for (j = 1; j < 33; ++j) {
      chick = 100 - i - j;
      if (chick % 3 == 0 && i * 5 + j * 3 + chick / 3 == 100)
        printf("%5d%5d%5d\n", i, j, chick);
    }
  }

  return 0;
}