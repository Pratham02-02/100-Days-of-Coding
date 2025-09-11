//Q1: Write a program to input two numbers and display their sum.


#include <stdio.h>

int main()
{
    int a, b;
    printf("Input your numbers");
    scanf("%d %d", &a, &b);
    printf("Sum of numbers %d and %d is\n %d", a, b, a+b);

    return 0;
}