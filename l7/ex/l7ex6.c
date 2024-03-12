#include <stdio.h>

int main() {
  int n, m;
  scanf("%d%d", &n, &m);

  char flag[] = {'1', 'l', 'e', 'v', 'e', 'l', '1'};

  int fc = 1;

  int stu[n + 1];
  for (int i = 1; i < n + 1; ++i) {
    stu[i] = 0;
  }

  int count = 0;
  for (int i = 1;; ++i) {
    if (i == n + 1)
      i = 1;
    if (stu[i])
      continue;
    ++count;
    if (count == m) {
      count = 0;
      stu[i] = fc++;
      if (fc == 8)
        break;
    }
  }

  for (int i = 1; i < n + 1; ++i) {
    if (stu[i]) {
      printf("%d %c\n", i, flag[stu[i] - 1]);
    }
  }

  return 0;
}