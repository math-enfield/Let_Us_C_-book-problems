/*If lengths of threee sides of a triangle are input through the keyboard, 
write a program to find the area of the triangle.*/
//calculating area of triangle using heron's formula
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f",&a, &b, &c);
    s = (a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the square is %f",area);
    return 0;
}