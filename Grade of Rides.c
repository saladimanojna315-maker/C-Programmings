#include<stdio.h>
int main()
{
    int Hurl_Factor,Spin_Factor,Speed_Factor;
    scanf("%d %d %d", &Hurl_Factor, &Spin_Factor, &Speed_Factor);
    if(Hurl_Factor > 50 && Spin_Factor > 60 && Speed_Factor > 100)
    printf("10
");
    else if(Hurl_Factor > 50 && Spin_Factor > 60)
    printf("9
 ");
    else if(Spin_Factor > 60 && Speed_Factor > 100)
    printf("8
");
    else if(Hurl_Factor > 50 &&  Speed_Factor > 100)
    printf("7
");
    else if(Hurl_Factor >50 || Spin_Factor >60 || Speed_Factor > 100)
    printf("6
");
    else
    printf("5
");
    return 0;
} 
