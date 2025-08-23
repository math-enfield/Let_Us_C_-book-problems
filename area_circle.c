//this is the code for the area of a circle
#include <stdio.h>
int main(){
    float pi=3.14;
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    printf("The area of the circle is %f",radius*radius*pi);
    return 0;
}