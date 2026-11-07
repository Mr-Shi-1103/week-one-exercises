# include <stdio.h>

int main (){

    float r,s,c,pi=3.1415926;

    printf("请输入圆半径r=");

    scanf("%f",&r);

    s=pi*(r*r);
    c=2*pi*r;

    printf("圆的周长为%f,面积为%f",c,s);
    
    return 0;
}