#include<stdio.h>
int main()
{
    int i, A, B;
    scanf("%d %d", &A, &B);
    for(i = A;i <= B; i++)
    {
        printf("%d ",i);
    }
    printf("\t");
    return 0;
}
