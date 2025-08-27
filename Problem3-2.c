/*Any integer is input, write a program to find wheather it's odd or even*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
    return 0;
}