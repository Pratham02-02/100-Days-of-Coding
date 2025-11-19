//Write a program to check if a number is an Armstrong number.


#include <stdio.h>

int main() {
    int n, temp, digit, power=0;
    int sum=0;

    printf("Enter a number");
    scanf("%d", &n);

    temp=n;
    while(temp>0){
        power++;
        temp/=10;
    }
    temp=n;
    while(temp>0){
        digit=temp%10;
        int p=1;
        for(int i=0;i<power;i++){
            p*=digit;
        }
        sum += p;
        temp /= 10;
    }
    if(sum==n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
    return 0;
}