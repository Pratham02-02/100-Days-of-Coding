//Q28: Write a program to print the product of even numbers from 1 to n.


#include <stdio.h>

int main() {
    int n, i;
    int P = 1;    
    int hasEven = 0;    

    printf("Enter a number greater than 1");
    scanf("%d", &n);

    for (i=1; i<=n; i++) {
        if (i%2==0) {      
            P=P*i;
            hasEven = 1;       
        }
    }
    if (hasEven) {
        printf("Product of evennumbers 1 to %d is %d\n", n, P);
    } else {
        printf("There are no even numbers between 1 and %d\n", n);
    }
    return 0;
}