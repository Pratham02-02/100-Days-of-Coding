//Q41 Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int n, temp, last, first, place=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp=n;
    last=temp%10;   
    while(temp>=10){
        temp/=10;
        place*=10;
    }
    first=temp;  
    int middle=n%place;     
    middle=middle/10;       

    int swapped=last*place+middle*10+first;

    printf("Number after swapping = %d", swapped);
    return 0;
}
