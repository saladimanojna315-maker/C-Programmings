#include<stdio.h>
int main()
{
    int cp,sp;
    float lp;
    scanf("%d%d",&cp,&sp);
    lp=(cp-sp)*100.0/cp;
    printf("%.2lf",lp);
    return 0;
}
