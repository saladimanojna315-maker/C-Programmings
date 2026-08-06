#include<stdio.h>
struct student
{
	int rollno;
	float marks;
}s1,s2;
int main()
{
	s1.rollno=61;
	s1.marks=85.6;
	s2=s1;
    printf("details of student 1:\n");
    printf("rollno:%d\n",s1.rollno);
    printf("marks:%.2f\n",s1.marks);
    printf("\n details of student 3 (after copying)\n");
    printf("rollno:%d\n",s2.rollno);
    printf("rollno:%d\n",s2.marks);
    return 0;
}
	
    
    
    
