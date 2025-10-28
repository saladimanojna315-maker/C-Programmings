#include<stdio.h>
int main()
{
    int Year;
    int last_two_digits;
    scanf("%d",&Year);
    last_two_digits = Year%100;
    printf("%02d
",last_two_digits);
    return 0;
}
