#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    if(X<3)
    {
        printf("LIGHT
");
    }
    else if(X >= 3 && X < 7)
    {
        printf("MODERATE
");
    }
    else
    {
        printf("HEAVY
");
    }
    return 0;
}
`
