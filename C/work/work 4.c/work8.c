#include <stdio.h>
int main()
{
  float C, F;
  printf("请输入摄氏温度：\n");
  scanf("%f", &C);
  F = (C + 32.00) * 9.00 / 5.00;
  printf("对应的华氏温度为：%.2f\n", F);
  return 0;
}