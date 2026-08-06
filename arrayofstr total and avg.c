#include<stdio.h>
struct student
{
	int marks;
};
int main()
{
	int n,i,total=0;
	float avg;
	struct student s[10];
	printf("enter no of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter %dth student marks:",i+1);
	scanf("%d",&s[i].marks);
	total=total+s[i].marks;
}
avg=(float)total/n;
printf("total=%d",total);
printf("avg=%f",avg);
return 0;
}
