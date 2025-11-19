//Q40 Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    int n, digit;
    int complement=0, place=1;

    printf("Enter a binary number");
    scanf("%d", &n);

    while(n>0){
        digit=n%10;     

        if(digit==0)
            complement+=1*place;   
        else
            complement+=0*place;   
        place*=10;
        n/=10;
    }
    printf("1's Complement = %d", complement);
    return 0;
}
