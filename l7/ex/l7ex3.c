#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int a[n][n];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", &a[i][j]);
    }
  }

  int r_max[n];
  for (int i = 0; i < n; ++i) {
    int max = a[i][0];
    for (int j = 1; j < n; ++j)
      if (a[i][j] > max)
        max = a[i][j];
    r_max[i] = max;
  }

  int c_min[n];
  for (int i = 0; i < n; ++i) {
    int min = a[0][i];
    for (int j = 1; j < n; ++j)
      if (a[j][i] < min)
        min = a[j][i];
    c_min[i] = min;
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (a[i][j] == r_max[i] && a[i][j] == c_min[j]) {
        printf("a(%d,%d)=%d\n", i, j, a[i][j]);
        return 0;
      }
    }
  }
  printf("NO\n");
  return 0;
}
