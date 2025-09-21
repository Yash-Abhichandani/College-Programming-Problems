/*Take the data required to Calculate Interest as input.
Calculate Compound interest.
Display Interest Amount and Total amount as Output. */
#include<stdio.h>
#include<math.h>
int main(){
    int prin,time,rate,rept;
    printf("Please Enter the data asked below:\n");
    printf("Principal Amount: ");
    scanf("%d",&prin);
    printf("Annual Rate of Interest: ");
    scanf("%d",&rate);
    printf("Duration(In years): ");
    scanf("%d",&time);
    printf("Please enter the no of times Interest will calculate per year: ");
    scanf("%d",&rept);
    double cint,total;
    double exp,calc1,calc2;
    calc1=(1+(rate/rept));
    calc2=rept*time;
    exp=pow(calc1,calc2);
    cint=exp;
    total=cint+prin;
    printf("The Interest Amount is: %.2lf/-\nThe Total Amount is: %.2lf/-",cint,total);
    return 0;

}