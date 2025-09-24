/*Q23:Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/


#include <stdio.h>
int main(){
    int d;
    printf("Enter the number of late days\n");
    scanf("%d", &d);
    
    if(0<d<=5){
        printf("Your fine is ₹%d\n", 2*d);
    }
    else if(5<d<=10){
        printf("Your fine is ₹%d\n", 4*d);
    }
    else if(10<d<=30){
        printf("Your fine is ₹%d\n", 6*d);
    }
    else{
        printf("Membership is cancelled");
    }
    return 0;
}