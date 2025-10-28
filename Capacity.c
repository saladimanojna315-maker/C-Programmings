#include<stdio.h>
int main()
{
    int T,S,B,C,X;
    scanf("%d%d%d",&T,&S,&B);
    C=2*T*S*B*512;
    X=C/1024;
    printf("%d KB",X);
    return 0;
}
