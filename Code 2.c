//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.



#include <stdio.h>

int main()
{
    int a, b;
    printf("Input your numbers");
    scanf("%d %d", &a, &b);
    printf("Sum of two numbers %d and %d is\n%d\n", a, b, a+b);
    printf("Difference of two numbers %d and %d is\n%d\n", a, b, a-b);
    printf("Product of two numbers %d and %d is\n%d\n", a, b, a*b);
    printf("Quotient of two numbers %d and %d is\n%f", a, b, (float)a/b);
    
    return 0;
}