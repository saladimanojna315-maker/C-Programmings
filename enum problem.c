#include<stdio.h>
int main()
{
	enum day{SUN,MON,TUES=4,WED,THU,FRI,SAT};
	enum day today = THU;
	printf("%d",today);
	return 0;
}
