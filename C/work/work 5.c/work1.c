#include <stdio.h>
int main()
{
  int num, a, b;
  printf("请输入整数：");
  scanf("%d", &num);
  // if (num > 0 && num % 2 == 0)
  // {
  //   printf("输入的数是正偶数");
  // }
  // else if(num > 0 && num % 2 != 0)
  // {
  //   printf("输入的数是正奇数");
  // }
  // else if(num < 0 && num % 2 != 0)
  // {
  //   printf("输入的数是负奇数");
  // }
  // else (num > 0 && num % 2 != 0)
  // {
  //   printf("输入的数是正奇数");
  // }
  a = num % 2;
  if (num < 0)
  {
    b = -1;
  }
  else if (num > 0)
  {
    b = 1;
  }
  else
  {
    b = 0;
  }
  switch (a)
  {
  case 0:
    printf("输入的数是偶数");
    break;
  case 1:
    printf("输入的数是奇数");
    break;
  }
  switch (b)
  {
  case -1:
    printf("且是正数");
    break;
  case 0:
    printf("且是非奇非偶");
    break;
  case 1:
    printf("且是负数");
    break;
  }
  return 0;
}