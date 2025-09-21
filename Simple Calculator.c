/* Take two numbers as imput and output the result of 4 basis arithmetic operations */
#include<stdio.h>
int main(){
    int num1;  
    int num2;
    printf("Please Enter the First Number: ");
    scanf("%d",&num1);
    printf("Please Enter the Second Number: ");
    scanf("%d",&num2);
    printf("The Calculations are below:\nAddition:%d\nSubtraction:%d\nMultiplication:%d\nDivision:%d",num1+num2,num1-num2,num1*num2,num1/num2);
    return 0;


}