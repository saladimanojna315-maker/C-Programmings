#include<stdio.h>
int main()
{
    int X,Y,Z,W,U;
    scanf("%d %d %d %d %d", &X, &Y, &Z, &W, &U);
    if(X >= 35 && Y >= 35 && Z >= 35 && W >= 35 && U >= 35)
    printf("PASSED
");
    else
    printf("FAILED
");
    return 0;
}
