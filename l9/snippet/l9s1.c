#include "stdio.h"
void splitfloat(double x, int *intpart, double *fracpart);
int main() {
  double a, fracpart;
  int intpart;
  scanf("%lf", &a);

  // 1
  splitfloat(a, &intpart, &fracpart);

  printf("INT:%d\nFRAC:%lf\n", intpart, fracpart);
  return 0;
}
void splitfloat(double x, int *intpart, double *fracpart) {
  // 2
  *intpart = (int)x;
  *fracpart = x - *intpart;
}