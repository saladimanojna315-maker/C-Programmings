#include<stdio.h>
int main()
{
    int radius;
    float area,perimeter;
    scanf("%d",&radius);
    area=3.14*radius*radius;
    perimeter=2*3.14*radius;
    printf("%.2f
",area);
    printf("%.2f
",perimeter);
    return 0;
