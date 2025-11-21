//Q60 Count positive, negative, and zero elements in an array.


#include <stdio.h>

int main() {
    int n;
    int pos=0, neg=0, zero=0;
    printf("Enter the number of elements ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements\n", n);
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if (arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
        else
            zero++;
    }
    printf("Number of positive elements\n%d\n", pos);
    printf("Number of negative elements\n%d\n", neg);
    printf("Number of zero elements\n%d\n", zero);
    return 0;
}
