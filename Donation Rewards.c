#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    if(X <= 3)
    printf("BRONZE
");
    else if(X > 3 && X <= 6)
    printf("SILVER
");
    else
    printf("GOLD
");
    return 0;
}
