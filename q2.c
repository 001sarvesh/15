// Write a function to find the smallest number from the given array

#include <stdio.h>

int findSmallestNumber(int arr[], int size) {
    int smallest = arr[0]; // Assume the first element is the smallest

    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update the smallest value
        }
    }

    return smallest;
}

int main() {
    int arr[] = {4, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallestNumber = findSmallestNumber(arr, size);
    printf("The smallest number is: %d\n", smallestNumber);

    return 0;
}
