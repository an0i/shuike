#include "stdio.h"
#include "string.h"
int findsubstring(char *s, char *sub) {
  // 1
  for (int i = 0; s[i] != '\0'; ++i) {
    for (int j = 0; s[i + j] == sub[j]; ++j) {
      if (sub[j + 1] == '\0')
        return i;
    }
  }
  return -1;
}
int main() {
  char line[80], substr[10];
  int index;
  gets(line);
  gets(substr);
  index = findsubstring(line, substr);
  if (index >= 0)
    printf("index=%d\n", index);
  else
    printf("NOEXIST\n");
  return 0;
}