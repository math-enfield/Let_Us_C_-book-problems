/*If the lengths of three sides of a triangle are entered, write a program to check whether triangle is valid or not.
Triangle is valid if the sum of two sides is greater than hypotenuse.*/
#include <stdio.h>
int main(){
    int side1,side2,side3,hypot,sum;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    if(side1>side2 && side1>side3){
        hypot=side1;
        sum= side2+side3;
    }
    if (side2>side1 && side2>side3){
        hypot=side2;
        sum=side1+side3;
    }
    if(side3>side1 && side3>side2){
        hypot=side3;
        sum=side1+side2;
    }
    if(sum>hypot)
        printf("The triangle is valid");
    else
        printf("The triangle is not valid");
    return 0;
}