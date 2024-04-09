#include <stdio.h>

int main() {
  int h, m, s, t;
  scanf("%d:%d:%d%d", &h, &m, &s, &t);

  int tt = t + s + 60 * m + 3600 * h;
  int rh = tt / 60 / 60;
  int rm = (tt - rh * 3600) / 60;
  int rs = tt - rh * 3600 - rm * 60;
  printf("After %d seconds is %d:%d:%d\n", t, rh % 24, rm, rs);
}