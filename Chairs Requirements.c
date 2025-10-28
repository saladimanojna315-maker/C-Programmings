#include<stdio.h>
int main()
{
    int X,Y,C;
    scanf("%d %d", &X ,&Y);
    C= X-Y;
    if(C < 0)
    {
    C=0;
    }
    printf("%d
",C);
    return 0;

}
