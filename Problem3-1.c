/*cost price and selling price are input through the keyboard, write a program to determine whether 
a profit or loss is made and by how much*/
#include <stdio.h>
int main(){
    float cp, sp, profit,loss;
    printf("Enter the cost price and selling price: ");
    scanf("%f %f", &cp,&sp);
    profit=sp-cp;
    loss=cp-sp;
    if(profit>0){
        printf("A profit of Rs. %f is made",profit);
    }
    if(loss>0){
        printf("A loss of Rs. %f is made",loss);
    }
    if(profit==0){
        printf("No profit or loss is made!");
    }
    return 0;
}