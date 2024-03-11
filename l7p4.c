#include <stdio.h>

int main() {
  int a[26];
  for (int i = 0; i < 26; ++i)
    a[i] = 0;

  int ch;
  while ((ch = getchar()) != EOF) {
    if (ch >= 'a' && ch <= 'z')
      ++a[ch - 'a'];
    else if (ch >= 'A' && ch <= 'Z')
      ++a[ch - 'A'];
  }

  for (int i = 0; i < 26; ++i) {
    if (a[i] > 0)
      printf("%c is %d\n", 'a' + i, a[i]);
  }

  return 0;
}