#include<stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    double O = N * 0.90;
    if(O < M)
    printf("ONLINE 
");
    else if(O > M )
    printf("DINING 
");
    else
    printf("EITHER 
");
    return 0;
}
