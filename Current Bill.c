#include<stdio.h>
int main()
{
    int units;
    double bill_amount = 0.0;
    double total_amount = 0.0;
    double surcharge = 0.0;
    scanf("%d", &units);
    if(units <= 199)
    bill_amount = units * 1.20;
    else if(units >= 200 && units <= 400)
    bill_amount = units * 1.50;
    else if(units >= 400 && units <= 600)
    bill_amount = units * 1.80;
    else if(units >= 600)
    bill_amount = units * 2.00;
    if(bill_amount > 400)
    surcharge = bill_amount * 0.15;
    else
    surcharge = 100.0;
    total_amount = bill_amount + surcharge;
    printf(" %.2f
",total_amount);
    return 0;
}
