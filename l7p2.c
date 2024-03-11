#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int a[n];
  int temp;
  for (int i = 0; i < n; ++i) {
    scanf("%d", &temp);
    a[i] = temp;
  }

  int x;
  scanf("%d", &x);

  int pos = -1;
  int less = 0, greater = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] < x)
      ++less;
    else if (a[i] > x)
      ++greater;
    else if (a[i] == x)
      pos = i;
  }

  printf("%d\n%d\n%d\n", pos, greater, less);

  return 0;
}