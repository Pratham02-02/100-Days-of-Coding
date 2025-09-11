//Q4: Write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>

int main()
{
    int r;
    printf("Input the radius of the circle");
    scanf("%d", &r);
    printf("Area of a circle of radius %d is\n%f sq unit\n", r, 3.14*r*r);
    printf("Circumfrence of a circle of radius %d is\n%f unit", r, 2*3.14*r);
    

    return 0;
}