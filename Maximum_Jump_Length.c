#include <stdio.h>
#include <stdbool.h>

bool canJump(int* nums, int numsSize) {
    int maxReach = 0;

    for (int i = 0; i < numsSize; i++) {
        if (i > maxReach) {
            // If the current index is not reachable, return false
            return false;
        }

        maxReach = (maxReach > i + nums[i]) ? maxReach : i + nums[i];

        if (maxReach >= numsSize - 1) {
            // If the last index is reachable, return true
            return true;
        }
    }

    return false;
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

    if (canJump(nums, numsSize)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
