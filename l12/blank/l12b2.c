#include <stdio.h>
#define N 10
struct stud {
  int num;
  char name[10];
  double score;
};
int readfile(char *fn, struct stud *s);
int writefile(char *fn, struct stud *s, int n);
void display(struct stud *s, int n);
int main() {
  struct stud s1[N], s2[N], s3[N];
  int i, j, n;
  double sum = 0, aver;
  n = readfile("stud1.dat", s1); // 读取学生的信息，并获得学生人数
  display(s1, n);
  for (i = 0; i < n; i++) // 求所有学生的总分
    sum = sum + s1[i].score;
  aver = sum / n;
  printf("AVERAGE=%g\n", aver);
  j = 0;
  for (i = 0; i < n; i++) // 将成绩大于等于平均分的学生记录存放于s2
    if (s1[i].score >= aver) {
      s2[j] = s1[i];
      j++;
    }
  if (writefile("stud2.dat", s2, n)) // 将s2中的学生记录保存到文件stud2.dat中
    printf("File save success!\n");
  else
    printf("File save failed!\n");
  n = readfile("stud2.dat", s3); // 从文件stud2.dat中读取学生信息到s3
  display(s3, n);                // 显示s3中的n个学生记录信息
  return 0;
}
void display(struct stud *s, int n) // 显示s中的所有n个学生的记录信息
{
  int i;
  printf(" Num       Name  Score\n");
  for (i = 0; i < n; i++)
    printf("%4d %10s  %g\n", s[i].num, s[i].name,
           s[i].score); // 显示学生的学号、姓名、成绩
}

int readfile(
    char *fn,
    struct stud
        *s) // 打开指定文件，将文件中的学生信息读入到s中，并返回实际读取的记录数
{
  FILE *fp;
  int i, count = 0;
  if ((fp = fopen(fn, "rb")) == NULL)
    printf("file:%s-cannot open\n", fn);
  fscanf(fp, "%d", &count); // 文件的首部（开始位置）存放学生记录的条数，读取条数
  for (i = 0; i < count; i++) {
    fread(s, sizeof(struct stud), 1, fp);
    s++;
  }
  fclose(fp);
  return count; // 返回实际读取的记录的条数
}
int writefile(char *fn, struct stud *s,
              int n) // 打开指定文件，将s中n个学生信息保存到文件fn中
{
  int i, result = 0;
  FILE *fp;
  if ((fp = fopen(fn, "wb")) == NULL) {
    result = 1; // 文件打开失败
    printf("%s-open file error!\n", fn);
  } else {
    fprintf(fp, "%d", n);
    for (i = 0; i < n; i++)
      if (fwrite(s, sizeof(struct stud), 1, fp) < 1) {
        result = 1; // 文件写入错误
        printf("file write error\n");
      }
  }
  fclose(fp);
  return result; // 返回0：文件保存成功，1：文件保存失败
}