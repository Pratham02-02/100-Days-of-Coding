//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.





#include <stdio.h>

int main(){
    int length, breadth;
    
    printf("Enter length of rectangle");
    scanf("%d", &length);
    printf("Enter breadth of rectangle");
    scanf("%d", &breadth);
    printf("Area of rectangle of length %d and breadth %d is\n%d sq unit\n", length, breadth, length*breadth);
    printf("Perimeter of rectangle of length %d and breadth %d is\n%d unit", length, breadth, (length+breadth)*(length+breadth));
    
    return 0;
}