#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct stu)
struct stu {
  int num;
  float score;
  struct stu *next;
};
int n;               // 全局变量
struct stu *create() // 创建动态链表
{
  struct stu *head = NULL;
  struct stu *p2, *p1;
  n = 0;
  p2 = p1 = (struct stu *)malloc(LEN);
  printf("输入学号和成绩(以空格隔开,学号为0时结束输入)：\n");
  scanf("%d%f", &p1->num, &p1->score);
  while (p1->num != 0) // 1
  {
    n++;
    if (n == 1) // 如果是第一个结点
    {
      p1->next = NULL;
      p2 = p1;
      head = p1;
    } else // 如果不是第一个结点
    {
      p1->next = NULL;
      p2->next = p1;

      p2 = p1; // 2
    }
    p1 = (struct stu *)malloc(LEN);
    scanf("%d%f", &p1->num, &p1->score);
  }
  free(p1);
  printf("这个链表中有%d个结点:\n", n);
  return head;
}
void print(struct stu *head) // 输出各结点的成员值
{
  struct stu *p = head;
  int i = 1;
  while (p != NULL) {
    printf("学号: %d,成绩：%.1f\n", p->num, p->score);
    p = p->next;
    i++;
  }
}
struct stu *insert(struct stu *head) // 插入新结点到头部
{
  struct stu *p1;
  p1 = (struct stu *)malloc(LEN);
  printf("输入待插入结点的学号和成绩(空格间隔，学号不能为0)\n");
  scanf("%d%f", &p1->num, &p1->score);
  p1->next = head;

  head = p1; // 4
  n++;
  return head;
}
void delete(struct stu *head, int m) // 删除指定的结点
{
  int i;
  struct stu *t = head, *p; // p指向要删结点的前结点
  for (i = 1; i < m; i++)   // 5
  {
    p = t;
    t = t->next;
  }
  p->next = t->next; // 6
  free(t);
  n--;
}
void query(struct stu *head) // 统计不及格人数并输出信息
{
  struct stu *p = head;
  int count = 0;
  while (p != NULL) {
    if (p->score < 60) // 7
    {
      printf("学号: %d,成绩：%.1f\n", p->num, p->score);
      count++;
    }
    p = p->next; // 8
  }
  printf("不及格人数：%d\n", count);
}
struct stu *sort(struct stu *head) // 按成绩降序排序
{
  struct stu *p, *q;
  int t1, i;
  float t2;
  for (p = head, i = 1; i < n; i++,
      p = p->next)                            // 9
    for (q = p->next; q != NULL; q = q->next) // 10
      if (p->score < q->score)                // 两结点的成绩进行比较
      {
        t1 = p->num, p->num = q->num, q->num = t1; // 交换结点的数据
        t2 = p->score, p->score = q->score, q->score = t2;
      }
  return head;
}
int main() {
  struct stu *head, *p;
  int i;
  printf("------1、创建链表------\n");
  head = create();
  print(head);
  getchar(); // 暂停屏幕输出,敲任意键继续
  printf("\n------2、插入头结点------\n");
  head = insert(head);
  printf("插入头结点后共有%d个结点：\n", n);
  print(head);
  getchar(); // 暂停屏幕输出,敲任意键继续
  printf("\n------3、删除第2个结点------\n");
  delete (head, 2);
  getchar(); // 暂停屏幕输出,敲任意键继续
  printf("删除第2个结点后共有%d个结点：\n", n);
  print(head);
  getchar(); // 暂停屏幕输出,敲任意键继续
  printf("\n------4、统计不及格人数，并输出------\n");
  query(head);
  getchar(); // 暂停屏幕输出,敲任意键继续
  printf("\n------5、按成绩降序排序------\n");
  p = sort(head);
  getchar();
  for (i = 1; i <= n; i++, p = p->next)
    printf("第%d名： num=%d score=%.0f\n", i, p->num, p->score);
  return 0;
}