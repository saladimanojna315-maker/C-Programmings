#include<stdio.h>
int main(){
    int Physics, Chemistry, Biology, Mathematics, Computer_Science;
    float Percentage, Total_Marks;
    scanf("%d %d %d %d %d", &Physics, &Chemistry, &Biology, &Mathematics, &Computer_Science);
    Total_Marks = Physics + Chemistry + Biology + Mathematics + Computer_Science;
    Percentage = (Total_Marks/500.0)*100;
    if( Percentage >= 90)
    printf("Grade A
");
    else if( Percentage >= 80)
    printf("Grade B
");
    else if(Percentage >= 70)
    printf(" Grade C
");
    else if(Percentage >= 60)
    printf(" Grade D
");
    else if(Percentage >= 40)
    printf(" Grade E
");
    else
    printf("Grade F
");
    return 0;
}
