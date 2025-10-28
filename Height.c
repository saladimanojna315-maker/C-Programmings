#include<stdio.h>
#include<stdlib.h>
int main()
{
    int X,Y,height;
    scanf("%d %d",&X,&Y);
    {
        if (X >= Y)
        {
            height = X;
        }
        else
        {
            height = Y;
        }
        printf("%d",height);
    } 
}
