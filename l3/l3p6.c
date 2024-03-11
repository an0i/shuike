#include <stdio.h>

int judgeyear(int year) {
  int flag = 0; //平年返回0
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    flag = 1; //闰年返回1
  return flag;
}

/*本题不考虑日期的合法性，输入的日期是合法的*/
int main() {
  int year, month, day;
  int dayNumber = 0;
  scanf("%d%d%d", &year, &month, &day);
  switch (month) {
    case 12:
      dayNumber += 30;
    case 11:
      dayNumber += 31;
    case 10:
      dayNumber += 30;
    case 9:
      dayNumber += 31;
    case 8:
      dayNumber += 31;
    case 7:
      dayNumber += 30;
    case 6:
      dayNumber += 31;
    case 5:
      dayNumber += 30;
    case 4:
      dayNumber += 31;
    case 3:
      dayNumber += judgeyear(year) ? 29 : 28;
    case 2:
      dayNumber += 31;
    case 1:
      dayNumber += day;
      break;
    default:
      printf("Input error!");
  }

  printf("%d\n", dayNumber);
}