#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);

  if (a >= 2 && a <= 4) printf("Spring\n");
  else if (a >= 5 && a <= 7) printf("Summer\n");
  else if (a >= 8 && a <= 10) printf("Autumn\n");
  else if (a == 1 || (a >= 11 && a <= 12)) printf("Winter\n");
  else printf("Error\n");

  return 0;
}