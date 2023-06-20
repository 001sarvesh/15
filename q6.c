// Write a function in C to read n number of values in an array and display it in reverse 
// order

#include <stdio.h>

void displayArrayInReverse(int arr[], int size) {
    printf("Array in reverse order:\n");
    
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    displayArrayInReverse(arr, n);
    
    return 0;
}
