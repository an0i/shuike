#include <stdio.h>

void order(int n) {
  if (n < 10)
    printf("%d", n);
  else {
    order(n / 10);        // 1
    printf("%d", n % 10); // 2
  }
}

int main() {
  int n;
  scanf("%d", &n);
  printf("out:");
  order(n);
}