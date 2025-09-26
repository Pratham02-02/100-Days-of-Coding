//Q17: Write a program to find the roots of a quadratic equation and categorize them.


#include <stdio.h>

int main() {
    float a, b, c;
    float discriminant;

    printf("Enter coefficients a, b and c");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation\n");
        return 0;
    }
    discriminant=b*b- 4*a*c;

    if (discriminant>0) {
        printf("Roots are real and different\n");
    }
    else if (discriminant==0) {
        printf("Roots are real and equal\n");
    }
    else {
        printf("Roots are complex and imaginary\n");
    }
    return 0;
}


