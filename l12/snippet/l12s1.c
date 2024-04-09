#include <stdio.h>
#include <string.h>
int getindex(char *w[], char *s);
int main() {
  int n;
  char *week[7] = {"Sunday",  "Monday", "Tuesday", "Wednesday",
                   "Thurday", "Friday", "Saturday"},
       str[20];
  gets(str);
  n = getindex(week, str);
  if (n == -1)
    printf("wrong  input!");
  else
    printf("%d", n);
  return 0;
}
int getindex(char *w[], char *s) {
  // 1
  for (int i = 0; i < 7; ++i) {
    if (strcmp(w[i], s) == 0)
      return i;
  }
  return -1;
}