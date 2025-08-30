/*Write a program to find the factorial of any number*/
#include <stdio.h>
int main(){
    int no,factorial=1,i=1;
    printf("Enter the number: ");
    scanf("%d",&no);
    while(i<=no){
        factorial=factorial*i;
        i++;
    }
    printf("The factorial of the number is %d",factorial);
    return 0;
}