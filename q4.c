// Write a function to rotate an array by n position in d direction. The d is an indicative 
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include <stdio.h>

void rotateArray(int arr[], int size, int n, char direction) {
    int i, j;
    
    if (direction == 'l' || direction == 'L') {
        // Left rotation
        for (i = 0; i < n; i++) {
            int temp = arr[0];
            
            for (j = 0; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            
            arr[size - 1] = temp;
        }
    }
    else if (direction == 'r' || direction == 'R') {
        // Right rotation
        for (i = 0; i < n; i++) {
            int temp = arr[size - 1];
            
            for (j = size - 1; j > 0; j--) {
                arr[j] = arr[j - 1];
            }
            
            arr[0] = temp;
        }
    }
    else {
        printf("Invalid direction specified. Please use 'l' or 'r'.\n");
    }
}

int main() {
    int arr[] = {32, 29, 40, 12, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 2;
    char direction = 'l';
    
    printf("Array before rotation:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    rotateArray(arr, size, n, direction);
    
    printf("\n\nArray after %d %s rotation:\n", n, direction == 'l' ? "left" : "right");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
