//Q30: Write a program to reverse a given number.


#include <stdio.h>

int main() {
    int n, r; 
    int rev = 0;

    printf("Enter a number");
    scanf("%d", &n);

    while(n!=0) {
        r=n%10;         
        rev=rev*10+r; 
        n=n / 10;                      
    }
    printf("Reverse of entered number is %d\n", rev);
    return 0;
}
