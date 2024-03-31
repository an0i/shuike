#include <stdio.h>

int main() {
  int n;
  scanf("%d\n", &n);

  char strs[n][100];
  char ch;
  for (int i = 0; i < n; ++i) {
    int l = 1;
    while ((ch = getchar()) != '\n') {
      strs[i][l++] = ch;
    }
    strs[i][0] = l;
  }

  int a[n];
  for (int i = 0; i < n; ++i)
    a[i] = i;
  for (int i = 0; i <= n - 2; ++i) {
    for (int j = i + 1; j <= n - 1; ++j) {
      int temp;
      if (strs[a[i]][0] > strs[a[j]][0]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  printf("Sorted result:\n");
  for (int i = 0; i < n; ++i) {
    for (int j = 1; j < strs[a[i]][0]; ++j) {
      putchar(strs[a[i]][j]);
    }
    putchar('\n');
  }
}