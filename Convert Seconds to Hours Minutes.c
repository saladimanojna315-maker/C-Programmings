#include<stdio.h>
int main()
{
    int total_seconds,hours,minutes,seconds;
    scanf("%d",&total_seconds);
    hours = total_seconds/3600;
    minutes = (total_seconds%3600)/60;
    seconds = total_seconds%60;
    printf("H:M:S-%d:%d:%d
",hours,minutes,seconds);
    return 0;
}
