#include <stdio.h>
#include <string.h>

int main() {
  char s1[500], s2[500];
  gets(s1);
  gets(s2);
  char *s = strcat(s1, s2);
  puts(s);
}