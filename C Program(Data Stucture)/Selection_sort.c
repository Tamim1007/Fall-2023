#include<stdio.h>
#include <conio.h>

// Function to perform selection sort recursively
void selection(int a[], int size) {
    int i, min, temp, j;

    // Base case: If the size is 1, the array is already sorted
    if (size == 1) {
        return;
    }

    // Selection sort algorithm
    for (i = 0; i < size; i++) {
        min = i;

        // Find the minimum element in the unsorted part of the array
        for (j = i + 1; j < size; j++) {
            if (a[min] > a[j]) {
                min = j;
            }
        }

        // Swap the found minimum element with the first element
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    // Recursive call to sort the remaining part of the array
    selection(a, size - 1);
}

int main() {
    int a[] = {2, 8, 9, 1, 3, 100};

    // Display the original array
    printf("Original array: ");
    for (int i = 0; i < 6; i++){
        printf("%d \t", a[i]);
    }
    printf("\n");

    // Call the selection sort function
    selection(a, 6);

    // Display the sorted array
    printf("Sorted array: ");
    int i;
    for (i = 0; i < 6; i++) {
        printf("%d\t", a[i]);
    }

    getch();
}

