#include <stdio.h>
int main()
{
  int num, fi, se, th;
  printf("请输入三位整数：");
  scanf("%d", &num);
  th = num % 10;
  se = (num % 100 - th) / 10;
  fi = num / 100;
  printf("%d%d%d", th, se, fi);
  return 0;
}