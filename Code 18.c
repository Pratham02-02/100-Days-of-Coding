/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/


#include <stdio.h>

int main(){
    int a;
    printf("Enter the percentage");
    scanf("%d", &a);
    {
        if(a>=90 && a<=100){
        printf("Your grade is A");
        }
        else if(a>=80 && a<=89){
            printf("Your grade is B");
        }
       else if(a>=70 && a<=79){
           printf("Your grade is C");
       } 
       else if(a>=60 && a<=69){
           printf("Your grade is D");
       }
       else if(a<60){
           printf("Your grade is F");
       }
       else{
           printf("Enter a valid Percentage between 0 to 100");
       }
    }
    return 0;
}
