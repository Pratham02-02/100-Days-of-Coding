#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements");
    for(i=0;i<n;i++){
        scanf("%d", &nums[i]);
    }
    int totalSum=0;
    for(i=0;i<n;i++) {
        totalSum+=nums[i];
    }
    int leftSum=0;
    for(i=0;i<n;i++){
        int rightSum=totalSum-leftSum-nums[i];
        if(leftSum==rightSum) {
            printf("%d", i);
            return 0;
        }
        leftSum+=nums[i];
    }
    printf("-1");
    return 0;
}
