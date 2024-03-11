#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);

  printf("%c\n", a % 3 == 0 ? (a % 5 == 0 ? 'A': 'B') : (a % 5 == 0 ? 'C' : 'D'));

  return 0;
}