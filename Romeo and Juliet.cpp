#include<stdio.h>
int main()
{
    int X,Y,Z;
    int T,C;
    scanf("%d%d%d",&X,&Y,&Z);
    scanf("%d",&T);
    T=X*5+Y*10;
    C=T/Z;
    printf("%d",C);
    return 0;
}
