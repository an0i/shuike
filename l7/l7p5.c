#include <stdio.h>
#include <math.h>

int IsPrimer(int num) {
  int i, flag = 0;
  for (i = 2; i <= num / 2; i++) {
    if (num % i == 0)
      break;
  }
  if (i > num / 2)
    flag = 1;
  return flag;
}

int main() {
  int a[100], n, i, j, temp;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  i = 0, j = n - 1;
  while (i < j) {
    if (IsPrimer(a[i]) && !IsPrimer(a[j])) {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
      ++i;
      --j;
    } else if (IsPrimer(a[i]) && IsPrimer(a[j])) {
      --j;
    } else if (!IsPrimer(a[i]) && IsPrimer(a[j])) {
      ++i;
      --j;
    } else {
      ++i;
    }
  }

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);

  return 0;
}