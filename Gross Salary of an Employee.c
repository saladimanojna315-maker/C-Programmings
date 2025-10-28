#include<stdio.h>
int main()
{
    float Basic_Salary,HRA,DA;
    float PF,Gross_Salary;
    scanf("%f%f%f",&Basic_Salary,&HRA,&DA);
    PF=0.12*Basic_Salary;
    printf("%.2f
",PF);
    Gross_Salary= Basic_Salary + HRA + DA + PF;
    printf("%.2f
",Gross_Salary);
    return 0;
}
