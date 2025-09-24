//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>
int main(){
    int a, b;
    char x;
    printf("Enter numbers and operator you want to use");
    scanf("%d %d %c", &a, &b, &x);
    
    switch(x){
        case '+':
        printf("Sum of two digits %d and %d is\n%d", a, b, a+b);
        break;
        
        case '-':
        printf("Difference of two digits %d and %d is\n%d", a, b, a-b);
        break;
        
        case '*':
        printf("Product of two digits %d and %d is\n%d", a, b, a*b);
        break;
        
        case '/':
        printf("Division of two digits %d and %d is\n%d", a, b, a/b);
        break;
        
        case '%':
        if(b==0){
            printf("Denominator cannot be zero");
        }
        else{
        printf("Remainder when %d is divided by %d is\n%d", a, b, a%b);
        }
        break;
        
        default:
        printf("Invalid operator");
    }
    return 0;
}