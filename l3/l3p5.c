#include <stdio.h>

int judgeyear(int year) {
  int flag = 0; //平年返回0
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    flag = 1; //闰年返回1
  return flag;
}

int main() {
  int year, month, day;
  int flag_1 = 0;
  scanf("%d%d%d", &year, &month, &day);
  //判断输入的合法性
  if (day >= 1 && day <= 31 &&
      (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
       month == 10 || month == 12)) //大月的月份
    flag_1 = 1;
  else if (day >= 1 && day <= 30 &&
           (month == 4 || month == 6 || month == 9 || month == 11))
    //小月的日的范围
    flag_1 = 1;
  else if (day >= 1 && day <= (judgeyear(year) ? 29 : 28) && month == 2)
    //二月的情况，
    //注意judgeyear函数的返回值，闰年返回1，闰年二月的天数也多1，使用加法运算
    flag_1 = 1;
  if (flag_1)
    printf("yes");
  else
    printf("no");
}