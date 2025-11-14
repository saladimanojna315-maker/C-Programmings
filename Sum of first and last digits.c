#include<stdio.h>
int main()
{
    int N, X , Y, SUM;
    scanf("%d", &N);
    Y = N % 10;
    X = N;
    while(X >= 10)
    X = X / 10;
    SUM = X + Y;
    printf("%d", SUM);
    return 0;
}
