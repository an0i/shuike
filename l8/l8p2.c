#include <stdio.h>

int sum(int start, int count) {
  int sum = 0;
  for (int i = 0; i < count; ++i) {
    sum += start + i;
  }
  return sum;
}

int main() {
  int a;
  scanf("%d", &a);

  int s = 0;
  for (int i = 1; i <= a; ++i) {
    s += sum(i, i + 1);
  }

  printf("sum=%d\n", s);

  return 0;
}