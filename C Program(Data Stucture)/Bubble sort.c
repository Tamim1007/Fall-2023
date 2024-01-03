#include<stdio.h>
#include <conio.h>

int main() {
    int n = 6;
    int array[6] = {10, 5, 9, 22, 37, 75};

    // Display the original array
    printf("Old Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }

    // Bubble sort algorithm to sort the array in ascending order
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            // Compare adjacent elements and swap if they are in the wrong order
            int first = array[j];
            int second = array[j + 1];
            if(second < first) {
                // Swap the elements
                int temp;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Display the sorted array
    printf("\nNew Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }

    // Wait for a key press (using getch from conio.h)
    getch();
}
