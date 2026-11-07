#include <stdio.h>
#include <windows.h>

int main()
{
    int a=4,b=3,c=2,d=1;
    printf("%d\n",(a<b?a:d<c?1:b));

    return 0;
}
