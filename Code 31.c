//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number");
    scanf("%d", &n);

    if(n==0){
        printf("Binary: 0");
        return 0;
    }
    int temp=n;
    int place=1;

    while(place<=temp/2){
        place *= 2;
    }
    printf("Binary");

    while(place>0){
        if(n>=place){
            printf("1");
            n-=place;
        }else{
            printf("0");
        }
        place/=2;
    }
    return 0;
}