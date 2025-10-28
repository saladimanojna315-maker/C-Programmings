//Area and Perimeter of a circle
#include<stdio.h>
int main()
{
	int r;
	float a,p;
	float pi=3.14;
	printf("enter radius:");
	scanf("%d",&r);
	a=pi*r*r;
	printf("area of circle is %f\n",a);
	p=2*r*pi;
	printf("perimeter of a circle is %f\n",p);
	return 0;	
}
