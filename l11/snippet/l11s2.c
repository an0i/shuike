#include <stdio.h>
#define N 10 // 学生人数上限
#define M 5  // 课程门数上限
struct stud {
  char name[10];    // 姓名
  double course[M]; // 成绩
  double aver;      // 平均分
} s[N];
int main() {
  int n, m, i, j;
  double course[M] = {0}; // 用于统计每门课程的平均分
  scanf("%d,%d", &n, &m); // 输入学生人数与课程门数

  for (i = 0; i < n; ++i) {
    scanf("%s\n", s[i].name);
    for (j = 0; j < m; ++j) {
      scanf("%lf", &s[i].course[j]);
      course[j] += s[i].course[j];
    }
  }

  printf("name            ");
  for (j = 0; j < m; j++) // 求每门课程的平均分
  {
    course[j] = course[j] / n;
    printf("CNO:%d      ", j + 1); // 显示栏目
  }
  printf("\n");
  for (i = 0; i < n; i++) {
    printf("%10s", s[i].name);
    for (j = 0; j < m; j++)
      if (s[i].course[j] < course[j])
        printf("%5.1f      ", s[i].course[j]);
      else
        printf("%8c", 32);
    printf("\n");
  }
  return 0;
}