//Q10 Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int Seconds;
    int hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &Seconds);

    hours   = Seconds / 3600;          
    minutes = (Seconds % 3600) / 60;  
    seconds = Seconds % 60;        
    
    printf("Time = %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}