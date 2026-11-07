#include <stdio.h>
int main()
{
  int num1, num2, num3, a, b, c;
  printf("请输入三个整数：");
  scanf("%d %d %d", &num1, &num2, &num3);
  if (num1 >= num2)
  {
    a = num2;
    b = num1;
  }
  else
  {
    a = num1;
    b = num2;
  }
  if (num3 >= a)
  {
    c = num3;
  }
  else
  {
    b = a;
    a = num3;
  }
  printf("从小到大分别是：%d %d %d", a, b, c);
  return 0;
}