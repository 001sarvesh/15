//  Write a function in C to count the frequency of each element of an array


#include <stdio.h>

void countFrequency(int arr[], int size) {
    int frequency[size];  // Array to store frequencies
    
    // Initialize frequencies to 0
    for (int i = 0; i < size; i++) {
        frequency[i] = 0;
    }
    
    // Count frequencies of each element
    for (int i = 0; i < size; i++) {
        int element = arr[i];
        frequency[element]++;
    }
    
    // Print the frequencies
    printf("Frequency of each element:\n");
    for (int i = 0; i < size; i++) {
        if (frequency[i] > 0) {
            printf("%d occurs %d time(s)\n", i, frequency[i]);
        }
    }
}

int main() {
    int arr[] = {2, 5, 2, 9, 5, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    countFrequency(arr, size);
    
    return 0;
}
