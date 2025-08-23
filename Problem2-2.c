/*If a five digit number is input through the keyboard, write a program to reverse the number.*/
#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, n5, n;
    printf("Please consider entering a five digit number: ");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    n1=n5;n2=n4;n4=n2,n5=n1;
    printf("The reverse number is %d%d%d%d%d",n1,n2,n3,n4,n5);
    return 0;
}