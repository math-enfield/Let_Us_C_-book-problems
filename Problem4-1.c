/*An year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the 
logical operators AND and OR*/
#include <stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if (year%400==0||year%100!=0 && year %4==0)
        printf("it's a leap year!");
    else{
        printf("It's not a leap year!");
    }
    return 0;
}