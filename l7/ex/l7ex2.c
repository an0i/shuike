#include <stdio.h>

int main() {
  int count = 0;

  int ch;
  while ((ch = getchar()) != EOF) {
    if (ch >= '0' && ch <= '9')
      ++count;
    else if (ch == '#') {
      ch = getchar();
      if (ch == '#' || ch == EOF)
        break;
      else if (ch >= '0' && ch <= '9')
        ++count;
    }
  }

  printf("sum=%d\n", count);

  return 0;
}
