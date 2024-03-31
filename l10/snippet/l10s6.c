// 同 l9s2 ?

#include "stdio.h"
#define N 10
void cycle(int *p, int n, int count) {
  // 1
  for (int i = 0, j = n - 1, temp; i < j; ++i, --j) {
    temp = p[i];
    p[i] = p[j];
    p[j] = temp;
  }

  count = count % n;
  for (int i = 0, j = n - 1 - count, temp; i < j; ++i, --j) {
    temp = p[i];
    p[i] = p[j];
    p[j] = temp;
  }

  for (int i = n - 1 - count + 1, j = n - 1, temp; i < j; ++i, --j) {
    temp = p[i];
    p[i] = p[j];
    p[j] = temp;
  }
}
int main() {
  int i, n, a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  scanf("%d", &n);
  printf("Before:\n");
  for (i = 0; i < N; i++)
    printf("%4d", a[i]);

  // 2
  cycle(a, N, n);

  printf("\nAfter:\n");
  for (i = 0; i < N; i++)
    printf("%4d", a[i]);
  printf("\n");
  return 0;
}