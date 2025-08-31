/*Two numbers are entered through the keyboard, write a program to find the value of one number raised to the power
of another*/
#include <stdio.h>
#include <math.h>
int main(){
    int no, no2, i=1, power=1;
    printf("Enter the number and it's power: ");
    scanf("%d %d",&no,&no2);
    while(i<=no2){
        power=power*no;
        i++;
    }
    printf("%d raised to the power %d is %d",no,no2,power);
    return 0;
}