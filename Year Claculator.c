/*Take total no of days as input. 
Display the output in the format 'Years:Months:Days'.
Assume the no of days in a month as 30 days. */
#include<stdio.h>
int main(){
    int total;
    printf("Please enter the no of Days: ");
    scanf("%d",&total);
    int years,months,days;
    years=total/365;
    months=(total%365)/30;
    days=(total%30);
    printf("%d:%d:%d",years,months,days);
    return 0;
    
}