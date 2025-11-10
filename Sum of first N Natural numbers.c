#include<stdio.h>
int main()
{
    int N;
    int i;
    int sum = 0;
    scanf("%d", &N);
    for(i = 1; i <= N; i++)
    {
        sum += i;
    }
    printf("%d
", sum);
    return 0;
}
