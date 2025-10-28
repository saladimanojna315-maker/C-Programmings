#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A,B;
    int X,Y,DIFFERENCE;
    scanf("%d%d",&A,&B);
    X=A+B;
    Y=A*B;
    DIFFERENCE=abs(X-Y);
    printf("%d",DIFFERENCE);
    return 0;
}
