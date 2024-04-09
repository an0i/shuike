#include <ctype.h>
#include <stdio.h>

int main() {
  FILE *fp = fopen("f1.txt", "r");
  int letter = 0, digit = 0, other = 0;
  int ch;
  while (1) {
    ch = fgetc(fp);
    if (isalpha(ch))
      ++letter;
    else if (isdigit(ch))
      ++digit;
    else
      ++other;
    if (ch == EOF)
      break;
  }
  fclose(fp);
  printf("letter=%d,digit=%d,other=%d\n", letter, digit, other);
}