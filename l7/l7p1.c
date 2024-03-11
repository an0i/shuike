#include <stdio.h>
#define LEN 11

void ins(int *a, int n, int pos, int end) {
  if (pos > end) {
    a[end] = n;
    return;
  }
  for (int i = end; i > pos; --i) {
    a[i] = a[i - 1];
  }
  a[pos] = n;
}

void del(int *a, int pos, int end) {
  if (pos > end)
    pos = 0;
  for (int i = pos; i < end; ++i) {
    a[i] = a[i + 1];
  }
}

int main() {
  int x1, n1, n2;
  scanf("%d%d%d", &x1, &n1, &n2);

  int a[LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

  for (int i = 0; i < LEN - 1; ++i) {
    printf("%5d", a[i]);
  }
  putchar('\n');

  ins(a, x1, n1, LEN - 1);

  for (int i = 0; i < LEN; ++i) {
    printf("%5d", a[i]);
  }
  putchar('\n');

  del(a, n2, LEN - 1);

  for (int i = 0; i < LEN - 1; ++i) {
    printf("%5d", a[i]);
  }
  putchar('\n');

  return 0;
}