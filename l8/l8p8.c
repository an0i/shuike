#include <stdio.h>

int isLeap(int y) { return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0); }

int isDate(int y, int m, int d) {
  if (y < 1 || m < 1 || m > 12 || d < 1 || d > 31)
    return 0;
  if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
    return 0;
  if (m == 2 && d > (isLeap(y) ? 29 : 28))
    return 0;

  return 1;
}

int main() {
  int y, m, d;
  scanf("%d-%d-%d", &y, &m, &d);

  if (!isDate(y, m, d)) {
    printf("DateError\n");
    return 0;
  }

  int sum = 0;
  switch (m - 1) {
  case 11:
    sum += 30;
  case 10:
    sum += 31;
  case 9:
    sum += 30;
  case 8:
    sum += 31;
  case 7:
    sum += 31;
  case 6:
    sum += 30;
  case 5:
    sum += 31;
  case 4:
    sum += 30;
  case 3:
    sum += 31;
  case 2:
    sum += isLeap(y) ? 29 : 28;
  case 1:
    sum += 31;
  default:
    sum += d;
  }

  printf("NO:%d\n", sum);

  return 0;
}