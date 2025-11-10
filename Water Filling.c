#include<stdio.h>
int main()
{
    int B1, B2, B3;
    int X;
    scanf("%d %d %d", &B1, &B2, &B3);
    X = (1 - B1) + (1 - B2) + (1 - B3);
    if(X >= 2)
    printf("Water filling time
");
    else
    printf("Not now
");
    return 0;
}
