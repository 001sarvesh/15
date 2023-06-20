// Write a function in C to count a total number of duplicate elements in an array.

#include <stdio.h>

int countDuplicateElements(int arr[], int size) {
    int count = 0;
    
    // Iterate over each element in the array
    for (int i = 0; i < size - 1; i++) {
        // Check if the current element is a duplicate
        if (arr[i] != -1) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    // Mark the duplicate element as -1 to avoid counting it again
                    arr[j] = -1;
                }
            }
        }
    }
    
    return count;
}

int main() {
    int arr[] = {2, 5, 7, 2, 9, 5, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int duplicateCount = countDuplicateElements(arr, size);
    
    printf("Total number of duplicate elements: %d\n", duplicateCount);
    
    return 0;
}
