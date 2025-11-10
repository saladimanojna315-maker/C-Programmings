#include<stdio.h>
int main()
{
    int X, N, M;
    scanf("%d %d %d", &X, &N, &M);
    if(N <= M + X)
    printf("YES
");
    else
    printf("NO
");
    return 0;
}
