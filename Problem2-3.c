/*Consider a currency system in which there are notes of six denominations, namely, Rs.1, Rs. 2, Rs.5, Rs.10,Rs.50 and Rs.100. 
If a sum of Rs. N is entered through the keyboard, write a program to compute the smallest number of notes
taht will combine to give Rs. N.*/
#include <stdio.h>
int main()
{
    int s,n1,n2,n5,n10,n50,n100;
    printf("enter the amount of money: ");
    scanf("%d",&s);
    n100=s/100;
    s=s%100;
    n50=s/50;
    s=s%50;
    n10=s/10;
    s=s%10;
    n5=s/5;
    s=s%5;
    n2=s/2;
    s=s%2;
    n1=s;
    printf("the number of Rs.100 notes are %d, Rs. 50 notes are %d, Rs. 10 are %d, Rs. 5 are %d, Rs.1 are %d",n100,n50,n10,n5,n2,n1);
    return 0;
}