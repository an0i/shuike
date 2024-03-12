#include <stdio.h>

int main() {
  int k, n;
  scanf("%d%d", &k, &n);

  int h = 0;
  int a, b;
  for (int i = 0; i < n; ++i) {
    scanf("%d%d", &a, &b);
    h += a;
    if (h >= k)
      break;
    h -= b;
    if (h < 0)
      h = 0;
  }

  printf(h >= k ? "YES\n" : "NO\n");

  return 0;
}