# include <stdio.h>
#include <math.h>

int main (){

    int a,b,c;
    double x1,x2;

    printf("已知式子ax²+bx+c=0，请分别输入数值a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("x1=%lf,x2=%lf",x1,x2);
    return 0;

}