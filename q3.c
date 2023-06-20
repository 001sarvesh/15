// Write a function to sort an array of any size. (TSRS)

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

#include <stdio.h>

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    bubbleSort(arr, size);
    
    printf("\n\nArray after sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
