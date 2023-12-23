#include <stdio.h>

int maxSubArray(int* nums, int numsSize) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < numsSize; i++) {
        // Choose the larger value between the current element and the sum so far
        currentSum = (currentSum + nums[i] > nums[i]) ? currentSum + nums[i] : nums[i];

        // Update the maximum sum if the current sum is greater
        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }

    return maxSum;
}

int main() {
    int numsSize;

    // Get the size of the array from the user
    printf("Enter the size of the integer array: ");
    scanf("%d", &numsSize);

    int nums[numsSize];

    // Get input from the user for each element in the array
    printf("Enter the elements of the integer array, separated by spaces:\n");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    int result = maxSubArray(nums, numsSize);

    printf("The maximum subarray sum is: %d\n", result);

    return 0;
}
