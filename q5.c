// Write a function to find the first occurrence of adjacent duplicate values in the array. 
// Function has to return the value of the element

#include <stdio.h>

int findFirstAdjacentDuplicate(int arr[], int size) {
    int i;
    
    for (i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            return arr[i];
        }
    }
    
    // If no adjacent duplicates found, return -1 or any other appropriate value
    return -1;
}

int main() {
    int arr[] = {3, 5, 7, 4, 4, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int duplicateValue = findFirstAdjacentDuplicate(arr, size);
    
    if (duplicateValue != -1) {
        printf("First adjacent duplicate value: %d\n", duplicateValue);
    } else {
        printf("No adjacent duplicates found.\n");
    }
    
    return 0;
}
