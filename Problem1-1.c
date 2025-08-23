//this is the code for finding gross salary when basic pay and other allowances are given
/*Ques: RAmesh's basic salary is input through the keyboard. His dearness alowance is 40% of basic salary, and house 
rent allowance is 20% of basic salary. Write a program to calculate hsi gross salry */
#include <stdio.h>

int main()
{
    int bs, hra, da, gs;
    printf("Enter your basic salary: ");
    scanf("%d",&bs);
    hra = 20% bs;
    da = 40% bs;
    gs = bs + da + hra;
    printf("Your gross salary is %d",gs);
    return 0;
}