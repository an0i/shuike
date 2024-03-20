#include <stdio.h>

int main() {
  int a, b;
  scanf("%d%d", &a, &b);

  int sum = 0;
  for (int i = 1; i <= b; ++i) {
    int t = a;
    for (int j = 1; j < i; ++j) {
      t = t * 10;
      t = t + a;
    }
    sum += t;
  }

  printf("s=%d\n", sum);

  return 0;
}