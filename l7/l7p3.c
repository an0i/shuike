#include <stdio.h>
#define LEN 20

int main() {
  int a[LEN]={81,55,102,84,204,105,56,85,58,202,101,83,104,103,82,201,59,203,57,205};

  for (int i=0; i<LEN;++i) {
    int x = a[i];
    if (x >= 0 && x <= 59) a[i] = -1;
    else if (x > 100 && x <= 200) a[i] = -2;
    else if (x > 200) a[i] = -3;
  }

  for (int i=0;i<LEN;++i) {
    printf((i + 1) % 5 == 0 ? "%5d\n" : "%5d", a[i]);
  }

  return 0;
}