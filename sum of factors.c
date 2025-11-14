#include<stdio.h>
int main()
{
    int N , i, sum = 0;
    scanf("%d", &N);
    for(i = 1; i <= N/2; i++)
    {
    if(N % i == 0)
    sum = sum + i;
    }
    printf("%d
",sum);
    return 0;
}
