#include <stdio.h>
#include <stdlib.h>

FILE *fp;
FILE *sfp;
FILE *cfp;

void fin() {
  fclose(fp);
  fclose(sfp);
  fclose(cfp);
  exit(0);
}

void handleComma() {
  fputc('"', sfp);
  int ch;
  while ((ch = fgetc(fp)) != EOF) {
    fputc(ch, sfp);
    if (ch == '"')
      break;
  }
  if (ch == EOF)
    fin();
}

void handleSlash() {
  int ch = fgetc(fp);
  if (ch == EOF) { // /EOF
    fputc('/', sfp);
    fin();
  } else if (ch == '/') { // //
    while ((ch = fgetc(fp)) != EOF) {
      fputc(ch, cfp);
      if (ch == '\n') {
        fputc('\n', sfp);
        break;
      }
    }
    if (ch == EOF)
      fin();
  } else if (ch == '*') { // /*
    while ((ch = fgetc(fp)) != EOF) {
      putchar(ch);
      if (ch == '*') {
        ch = fgetc(fp);
        if (ch == '/') { // */
          fputc('\n', cfp);
          break;
        } else {
          fputc('*', cfp);
        }
      }
      fputc(ch, cfp);
    }
    if (ch == EOF)
      fin();
  } else {
    fputc('/', sfp);
    fputc(ch, sfp);
  }
}

int main() {
  fp = fopen("hello.c", "r");
  sfp = fopen("newhello.c", "w");
  cfp = fopen("comment.txt", "w");

  int ch;
  while ((ch = fgetc(fp)) != EOF) {
    if (ch == '\'') {
      fputc('\'', sfp);
      fputc(fgetc(fp), sfp);
      fputc(fgetc(fp), sfp);
    } else if (ch == '"') {
      handleComma();
    } else if (ch == '/') {
      handleSlash();
    } else {
      fputc(ch, sfp);
    }
  }

  fin();
}