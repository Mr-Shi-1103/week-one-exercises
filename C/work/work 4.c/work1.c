#include <stdio.h>

int main(){

    int num,a,b,c,d;
    
    printf("请输入四位16进制数：");
    scanf("%x", &num);

    a=num%0x10;
    b=(num/0x10)%0x10;
    c=(num/0x100)%0x10;
    d=(num/0x1000)%0x10;

    printf("%x%x%x%x",a,b,c,d);

    return 0;
}