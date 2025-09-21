/*We will ask for the data to calculate the simple imterest.
Display the interest amount and the total amount as output*/
#include<stdio.h>
int main(){
    int prin,time,rate;
    printf("Please Enter the data asked below:\n");
    printf("Principal Amount: /-");
    scanf("%d",&prin);
    printf("Annual Rate of Interest: ");
    scanf("%d",&rate);
    printf("Duration(In years): ");
    scanf("%d",&time);
    double sint,total;
    sint=(prin*rate*time)/100;
    total=sint+prin;
    printf("The Interest Amount is: %.2lf/-\nThe Total Amount is: %.2lf/-",sint,total);
    return 0;


}