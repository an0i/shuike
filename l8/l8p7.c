#include <stdio.h>

int is(int n) {
  int t = n;
  int sum = 0;
  while (t > 0) {
    int last = t % 10;
    sum += last * last * last;
    t /= 10;
  }
  return sum == n;
}

int main() {
  int a, b;
  printf("Input m and n: ");
  scanf("%d%d", &a, &b);

  for (int i = a; i <= b; ++i) {
    if (is(i)) {
      printf("%d\n", i);
    }
  }

  return 0;
}