/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/

#include <stdio.h>
int main(){
    int u;
    
    printf("Number of units consumed\n");
    scanf("%d", &u);
    
    if(0<u && u<=100){
        printf("Your bill is ₹%d", 5*u);
    }
    else if(100<u && u<=200){
        printf("Your bill is ₹%d", (5*100)+((u-100)*7));
    }
    else if(200<u && u<=300){
        printf("Your bill is ₹%d", ((5*100)+(7*100))+((u-200)*10));
    }
    else{
        printf("Your bill is ₹%d", ((5*100)+(7*100)+(10*100)+((u-300)*12)));
    }
    return 0;
}