#include <stdio.h>
int main()
{
  char a;
  printf("请输入字符：\n");
  scanf("%c", &a);
  printf("前一个字母为%c，后一个字母为%c\n", a - 1, a + 1);
  printf("三个字符的ASCII码分别为：%d、%d、%d", a - 1, a, a + 1);
  return 0;
}