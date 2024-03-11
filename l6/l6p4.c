#include <stdio.h>

int main() {
  int ch;
  while ((ch = getchar()) != '\n') {
    if (ch >= 'a' && ch <= 'z')
      putchar((ch - 'a' + 3) % 26 + 'A');
    else if (ch >= 'A' && ch <= 'Z')
      putchar((ch - 'A' + 3) % 26 + 'a');
    else if (ch >= '0' && ch <= '9')
      putchar((ch - '0' + 5) % 10 + '0');
    else
      putchar(ch);
  }
  putchar('\n');

  return 0;
}