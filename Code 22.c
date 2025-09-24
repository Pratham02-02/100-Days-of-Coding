//Q22: Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>
int main(){
    float cp, sp;
    printf("Enter costprice of the product\n");
    scanf("%f", &cp);
    printf("Enter sellingprice of the product\n");
    scanf("%f", &sp);
    
    if(cp<sp){
        printf("Profit percentage is %f\n", ((sp - cp)/cp)*100);
    }
    else if(cp>sp){
        printf("Loss percentage is %f\n", ((cp - sp)/cp)*100);
    }
    else{
        printf("Nor Profit Nor Loss\n");
    }
    return 0;
}