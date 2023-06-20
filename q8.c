//  Write a function in C to print all unique elements in an array.

#include <stdio.h>

void printUniqueElements(int arr[], int size) {
    printf("Unique elements in the array:\n");

    // Iterate over each element in the array
    for (int i = 0; i < size; i++) {
        int isUnique = 1;  // Flag to track uniqueness
        
        // Check if the current element is unique
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;  // Not unique
                break;
            }
        }
        
        // If the element is unique, print it
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\n");
}

int main() {
    int arr[] = {2, 5, 7, 2, 9, 5, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printUniqueElements(arr, size);
    
    return 0;
}
