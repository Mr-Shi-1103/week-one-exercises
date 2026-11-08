#include <stdio.h>
int main()
{
  int a, b, c;
  printf("定义a,b,c的值分别为:");
  scanf("%d %d %d", &a, &b, &c);
  c = a + b + c;
  a = c - b - a;
  b = c - b - a;
  c = c - b - a;
  printf("a=%d,b=%d,c=%d", a, b, c);
  return 0;
}