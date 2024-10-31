#include <stdio.h>

// Binary Search function
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Calculate the middle index
        
        // If the target number is found
        if (arr[mid] == target) {
            return mid;  // Return the index of the target
        }
        
        // If the target is on the right side
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If the target is on the left side
        else {
            right = mid - 1;
        }
    }
    
    return -1;  // Return -1 if the target is not found
}

int main() {
    // Sorted array of numbers from 10 to 20
    int arr[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Target numbers to search for
    int targets[] = {13, 15, 18};
    int numTargets = sizeof(targets) / sizeof(targets[0]);

    // Iterate over each target number and perform binary search
    for (int i = 0; i < numTargets; i++) {
        int result = binarySearch(arr, size, targets[i]);
        if (result != -1) {
            // If the number is found, print its index
            printf("Number %d found at index %d.\n", targets[i], result);
        } else {
            // If the number is not found, print a message
            printf("Number %d not found in the array.\n", targets[i]);
        }
    }

    return 0;
}
