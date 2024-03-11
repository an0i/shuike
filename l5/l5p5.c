#include <stdio.h>

int main() {
  int n, m;
  scanf("%d,%d", &n, &m);

  for (int i = n; m > 0; --i) {
    int flag = 1;
    for (int j = 2; j * j <= i; ++j) {
      if (i % j == 0)
        flag = 0;
    }
    if (flag) {
      --m;
      printf("%d\n", i);
    }
  }

  return 0;
}