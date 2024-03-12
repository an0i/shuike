#include <stdio.h>

int main() {
  int i, j, count = 0, num;
  int a[5][5] = {{1, 2, 3, 4, 5},
                 {2, 3, 4, 5, 6},
                 {3, 4, 5, 6, 7},
                 {0, 1, 2, 3, 4},
                 {6, 7, 8, 9, 0}};
  scanf("%d", &num);
  for (i = 0; i < 5; i++)
    for (j = 0; j < 5; j++)
      if (a[i][j] != num) {
        //
        a[count / 5][count % 5] = a[i][j];
        ++count;
        //
      }
  for (i = 0; i < 5; i++) {
    //
    for (j = 0; j < ((count - i * 5) / 5 > 0 ? 5 : count - i * 5); ++j) {
      printf("%3d", a[i][j]);
    }
    //
    printf("\n");
  }
  return 0;
}