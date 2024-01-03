#include <stdio.h>
#include <conio.h>

int main() {
    // Initialize an array
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");

    // Insertion Sort Algorithm
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    // Display the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");

    getch(); // Wait for a key press
}
