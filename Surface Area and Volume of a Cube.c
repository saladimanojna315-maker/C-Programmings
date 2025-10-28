#include<stdio.h>
int main()
{
    int side;
    long surface_area,volume;
    scanf("%d",&side);
    surface_area=6*side*side;
    volume=side*side*side;
    printf("Surface area = %ld and Volume = %ld",surface_area,volume);
    return 0;
}
