/*While purchasing certain items, a discount of 10% is offered if the quantitiy purchased is more than 1000. 
If quantity and price per item are input through the keyboard, write a program to calculate the total expenses.*/
#include <stdio.h>
int main()
{
    int qty;
    float price,tot_price,dis;
    printf("Please enter the quantity and price per item of the object: ");
    scanf("%d %f",&qty, &price);
    if(qty>1000){
        dis=price*qty*0.1;
        tot_price=price*qty-dis;
    }
    else{
        tot_price=price*qty;
    }
    printf("Your total price is %f",tot_price);
    return 0;
}