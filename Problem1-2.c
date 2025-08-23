/*Q: The distance between two cities (in kilometers) is input through the keyboard. Write a program to
 convert and print this distance in meters, feet, inches and centimeters.*/
#include <stdio.h>
int main()
{
    float distance, mt, ft, inch, cm;
    printf("Enter the distance between the two cities in kilometers: ");
    scanf("%f",&distance);
    mt = distance*1000;
    cm = mt * 100;
    ft = cm / 30;
    inch = cm / 2.54;
    printf("The distance is %f meters, %f ft, %f inches, %f centimeters.",mt,ft,inch,cm);
    return 0;
}