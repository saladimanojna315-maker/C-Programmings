#include<stdio.h>
int main()
{
    int X1,Y1,X2,Y2;
    int Cost1,Cost2;
    scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
    Cost1 = X1 + Y1;
    Cost2 = X2 + Y2;
    if(Cost1 < Cost2)
    {
    printf("%d
", Cost1);
    }
    else
    {
    printf("%d
", Cost2);
    }
    return 0;
}
