/*Write a progrmam to calculate the overtime pay of 10 employees. Overtime is paid at the rate of Rs. 120.00 
per hour for every hour worked above 40 hours. Assume that eployees don't work for fractional part the hour.
*/
#include <stdio.h>
int main(){
    int no=1, hrs;
    float pay;
    while(no<10){
        printf("Enter the number of hours worked: ");
        scanf("%d", &hrs);
        pay=hrs*120;
        printf("Your pay for the overtime is %f\n",pay);
        no=no+1;
    }
    return 0;
}