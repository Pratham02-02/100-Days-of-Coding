//Q66 Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main(){
    int n, element, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &element);
    pos = n;
    for (int i = 0; i < n; i++) {
        if (element < arr[i]) {
            pos = i;
            break;
        }
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    n++;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
