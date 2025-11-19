#include <stdio.h>

int main() {
    int n, x, i;
    printf("Enter number of elements");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d sorted elements", n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter x");
    scanf("%d", &x);
    
    int index= -1;
    
    for(i=0;i<n;i++){
        if(a[i]>=x){
            index=i;
            break;
        }
    }
    printf("%d", index);
    return 0;
}
