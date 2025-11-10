#include<stdio.h>
int main()
{
    int N;
    int count = 0;
    scanf("%d", &N);
    while(N > 0)
    {
    N = N / 10;
    count = count + 1;
    }
    printf("%d
", count);
    return 0;   
}
