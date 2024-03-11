#include <stdio.h>

int main() {
  int a[100], n, i, tmp;
  scanf("%d", &n);

  for (i = 0; i < n; i++)
    a[i] = 2 * i + 1;

  for (i = 0; i < n; i++)
    printf("%3d", a[i]);
  printf("\n");

  for (i = 0; i < n - 1 - i; ++i) {
    tmp = a[i];
    a[i] = a[n - 1 - i];
    a[n - 1 - i] = tmp;
  }

  for (i = 0; i < n; i++)
    printf("%3d", a[i]);

  return 0;
}
