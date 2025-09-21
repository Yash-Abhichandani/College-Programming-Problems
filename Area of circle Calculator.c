/*Take the radius of the circle as input and display the area as output.*/
#include<stdio.h>
#include <math.h>
#define pi 3.14
int main(){
    int radi;
    double area,exp;
    printf("Please enter the Radius of the Circle: ");
    scanf("%d",&radi);
    exp=pow(radi,2);
    area=pi*exp;
    printf("The area of the circle is: %.2lf",area);
    return 0;

}