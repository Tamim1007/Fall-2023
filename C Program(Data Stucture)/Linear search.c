#include <stdio.h>

int main() {
    // Initialize an array
    int arr[] = {10, 20, 30, 40, 50};

    // Element to search for
    int x = 30;

    // Loop through the array to find the element
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] == x) {
            // Print the index when the element is found
            printf("Element %d found at index %d\n", x, i);
            break; // Exit the loop once the element is found
        }
    }

    return 0;
}
