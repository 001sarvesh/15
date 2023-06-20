//  Write a function in C to merge two arrays of the same size sorted in descending 
// order

#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int size, int mergedArr[]) {
    int i = 0;
    int j = 0;
    int k = 0;
    
    // Merge the arrays in descending order
    while (i < size && j < size) {
        if (arr1[i] >= arr2[j]) {
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }
    
    // Copy the remaining elements from arr1, if any
    while (i < size) {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }
    
    // Copy the remaining elements from arr2, if any
    while (j < size) {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int arr1[] = {9, 7, 5, 3, 1};
    int arr2[] = {8, 6, 4, 2, 0};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int mergedArr[2 * size];  // Resultant merged array
    
    mergeArrays(arr1, arr2, size, mergedArr);
    
    printf("Merged array in descending order:\n");
    for (int i = 0; i < 2 * size; i++) {
        printf("%d ", mergedArr[i]);
    }
    
    return 0;
}
