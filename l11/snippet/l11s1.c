#include <stdio.h>
int ack(int m, int n) {
  if (m == 0)
    return n + 1;
  if (m > 0 && n == 0)
    return ack(m - 1, 1);
  return ack(m - 1, ack(m, n - 1));
}
int main() {
  int m, n, s;
  scanf("%d,%d", &m, &n);
  s = ack(m, n);
  printf("s=%d\n", s);
  return 0;
}