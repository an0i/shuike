#include <stdio.h>
#include <stdlib.h>
char *match(char *s, char c1,
            char c2); // 获取字符串s中从c1到c2之间的所有字符，并且返回c1的地址
int main() {
  char str[100], ch_start, ch_end, *p;
  scanf("%s\n", str);
  scanf("%c  %c", &ch_start, &ch_end);
  p = match(str, ch_start, ch_end);
  printf("%s", p);
  return 0;
}
char *match(char *s, char c1, char c2) {
  // 1
  int l = 0;
  while (s[l] != c1)
    ++l;
  int r = l + 1;
  while (s[r] != c2)
    ++r;
  char *m = malloc((r - l + 2) * sizeof(char));
  for (int j = l; j <= r; ++j)
    m[j - l] = s[j];
  m[r - l + 1] = '\0';
  return m;
}