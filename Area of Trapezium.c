#include<stdio.h>
int main()
{
    int b1,b2,h;
    float A;
    scanf("%d%d%d",&b1,&b2,&h);
    A=0.5*(b1+b2)*h;
    printf("%.4f",A);
    return 0;
}
