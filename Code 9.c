//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


#include <stdio.h>

int main() {
    float p;      
    float r;          
    int   t;           
    float simpleInterest;
    float compoundAmount;
    float compoundInterest;
    int i;

    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the annual interest rate (%%): ");
    scanf("%f", &r);

    printf("Enter the time in years: ");
    scanf("%d", &t);

    simpleInterest = (p * r * t) / 100;
    compoundAmount = p;
    for (i = 0; i < t; i++) {
        compoundAmount = compoundAmount * (1 + r / 100);
    }
    compoundInterest = compoundAmount - p;

    printf("\nSimple Interest = %f\n", simpleInterest);
    printf("Compound Interest = %f\n", compoundInterest);

    return 0;
}
