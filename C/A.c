#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001); // 固定解决中文乱码
    char name[20]; // 定义字符数组用来存用户名
    int age;

    printf("=== 你的第一个C交互小程序 ===\n");
    printf("请输入你的名字：");
    scanf("%s", name); // 读取用户输入的名字
    printf("请输入你的年龄：");
    scanf("%d", &age); // 读取用户输入的整数年龄

    printf("你好呀 %s！今年%d岁，欢迎开启C语言编程之旅~", name, age);
    printf("\n你现在在VSCode里已经可以正常写C代码啦~ \n");
    return 0;
}
