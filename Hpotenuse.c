#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    float z;
    scanf("%d%d",&x,&y);
    z=sqrt(pow(x,2)+pow(y,2));
    printf("%.2f",z);
    return 0;
}
