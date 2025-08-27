/*If a character is entered through the keyboard, write a program to determine whether the character is capital 
letter, small case letter, a digit or special symbol.*/
#include<stdio.h>
int main(){
    int charac;
    printf("Enter the ASCII number: ");
    scanf("%d",&charac);
    if (charac>=65 && charac <= 90)
        printf("The character is a capital letter");
    if (charac>=97 && charac <=122)
        printf("The character is a small letter");
    if (charac>=48 && charac <=57)
        printf("The character is an integer between 0 and 9");
    if ((charac>=0 && charac<=47)||(charac>=58 && charac<=64)||(charac>=123 && charac<=127))
        printf("The character is a special character");
    return 0;
}