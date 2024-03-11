#include <stdio.h>

int main() {
  int a[100], n, k, i, j;
  int tmp;
  scanf("%d", &k);
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  if (k % n != 0) {
    for (i = 0, j = n - 1; i < j; ++i, --j) {
      tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
    for (i = k % n, j = n - 1; i < j; ++i, --j) {
      tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
    for (i = 0, j = k % n - 1; i < j; ++i, --j) {
      tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
  }

  for (i = 0; i < n; i++)
    printf("%3d", a[i]);
  return 0;
}
