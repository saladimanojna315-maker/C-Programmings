#include<stdio.h>
int main()
{
    int X,Y,H,P;
    scanf("%d%d%d",&X,&Y,&H);
    if(H<=1)
    {
        P=X;
    }
    else
    {
        P=X+(H-1)*Y;
    }
    printf("%d",P);
    return 0;
}

