#include <stdio.h>

int main() {
  char chars[1000];
  int n = 0;

  int ch;
  while ((ch = getchar()) != '\n') {
    chars[n++] = ch;
  }
  ch = getchar();

  printf("After delete:\n");
  for (int i = 0; i < n; ++i) {
    if (chars[i] != ch)
      putchar(chars[i]);
  }
  putchar('\n');

  return 0;
}