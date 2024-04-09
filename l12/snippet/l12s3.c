#include <stdio.h>
#include <stdlib.h>
int main() {
  FILE *fp;
  int i = 0;
  char str[10][81]; // 每行最多80个字符
  // 1
  if (!(fp = fopen("data3.txt", "r"))) // 打开文件data3.txt
  {
    printf("%s  open  error!\n", "data3.txt");
    exit(1);
  }
  // 2
  while (fgets(str[i], 81, fp)) {
    // 3
    printf("%s", str[i]);
    i++;
  }
  fclose(fp);
  return 0;
}