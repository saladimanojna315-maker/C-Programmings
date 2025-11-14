#include<stdio.h>
int main()
{
    int N, i;
    scanf("%d %d", &N, &i);
    for(i = 1; i <= N; i++)
    {
        if(N % i == 0)
        {
            printf("%d ", i);
        }
    }
        printf("\t");
        return 0;
}
