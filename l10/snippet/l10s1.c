#include "stdio.h"
#define N 10
void insert(int s[], int x,
            int n) // x表示待插入的数值，n表示数组中已有的数值的个数。
{
  int i;
  if (x > s[n - 1])
    s[n] = x;
  else {
    for (i = n; i > 0 && s[i - 1] > x; i--)
      s[i] = s[i - 1];
    s[i] = x;
  }
}
void insertsort(int s[], int n) {
  // 1
  for (int i = 1; i < n; ++i) {
    insert(s, s[i], i);
  }
}
int main() {
  int i, n, a[N];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  // 2
  insertsort(a, n);

  for (i = 0; i < n; i++)
    printf("%4d", a[i]);
  printf("\n");
  return 0;
}