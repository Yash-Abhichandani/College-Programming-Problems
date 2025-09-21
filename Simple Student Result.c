/*Take the marks of 3 subjects.
Output the Total marks and percentage of the student.
Assuming max marks are 100 in each subject. */
#include<stdio.h>
int main(){
    int math,phy,chem;
    printf("Please Enter the marks of subjects asked as follows\n");
    printf("Maths: ");
    scanf("%d",&math);
    printf("Physics: ");
    scanf("%d",&phy);
    printf("Chemistry: ");
    scanf("%d",&chem);
    int total;
    double perct;
    total=math+phy+chem;
    perct=total/300;
    printf("The total marks of the student are: %d\nThe percentage of the student is: %.2lf",total,perct);
    return 0;

    
}