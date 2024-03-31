#include <stdio.h>
#define N 10
/*
                                   ↓
  {10, 12, 14, 17, 20, 25, 28, 31, 40, □ }
                               ↓
  {10, 12, 14, 17, 20, 25, 28, 31, □ , 40}
*/
void insert(int *p, int x,
            int n) // x表示待插入的数值，n表示数组中已有的数值的个数。
{
  int i, j; // 不允许再定义其它变量和数组
  // 1
  for (i = n - 1; i >= 0 && x < p[i]; --i) {
    p[i + 1] = p[i];
  }
  p[i + 1] = x;
}
int main() {
  int i, m, a[N] = {10, 12, 14, 17, 20, 25, 28, 31, 40};
  scanf("%d", &m);

  // 2
  insert(a, m, N - 1);

  for (i = 0; i < N; i++)
    printf("%4d", a[i]);
  printf("\n");
  return 0;
}