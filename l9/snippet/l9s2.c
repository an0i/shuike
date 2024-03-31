#include "stdio.h"
#define N 10
void cycle(int s[], int n, int count); // n表示数组长度，count表示移动的位置数
int main() {
  int i, n, s[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  scanf("%d", &n);
  printf("Before:\n");
  for (i = 0; i < N; i++)
    printf("%4d", s[i]);

  // 1
  cycle(s, N, n);

  printf("\nAfter:\n");
  for (i = 0; i < N; i++)
    printf("%4d", s[i]);
  printf("\n");
  return 0;
}
void cycle(int s[], int n, int count) {
  // 2
  for (int i = 0, j = n - 1, temp; i < j; ++i, --j) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }

  count = count % n;
  for (int i = 0, j = n - 1 - count, temp; i < j; ++i, --j) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }

  for (int i = n - 1 - count + 1, j = n - 1, temp; i < j; ++i, --j) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
}