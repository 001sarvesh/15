// Write a function to find the greatest number from the given array of any size. (TSRS)

#include <stdio.h>

int findGreatestNumber(int numbers[], int size) {
    if (size == 0) {
        fprintf(stderr, "Array is empty.\n");
        return -1; // or handle the error in your desired way
    }

    int greatestNumber = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > greatestNumber) {
            greatestNumber = numbers[i];
        }
    }

    return greatestNumber;
}

int main() {
    int numbers[] = {10, 5, 8, 15, 3, 20};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int greatestNumber = findGreatestNumber(numbers, size);
    printf("The greatest number is: %d\n", greatestNumber);

    return 0;
}


