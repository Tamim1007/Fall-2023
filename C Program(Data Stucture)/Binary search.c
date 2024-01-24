#include <stdio.h>


// Function to perform binary search on a sorted array
int binarySearch(int left, int right, int value, int arr[]) {
    // Calculate the middle index of the current search range
    int mid = (left + right) / 2;

    // If the value is found at the middle index, return the index
    if (arr[mid] == value) {
        return mid;
    }

    // If the value is greater than the element at the middle index,
    // search in the right half of the array
    if (value > arr[mid]) {
        return binarySearch(mid + 1, right, value, arr);
    }
    // If the value is less than the element at the middle index,
    // search in the left half of the array
    else {
        return binarySearch(left, mid - 1, value, arr);
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int n = sizeof(arr) / sizeof(arr[0]);
    int value;
    printf("Enter the value you want search from this array (10, 20, 30, 40, 50, 60, 70, 80, 90, 100): ");
    scanf("%d", &value);
    int left = 0;
    int right = n - 1;

    // Perform binary search and store the result in 'answer'
    int answer = binarySearch(left, right, value, arr);

    // Print the result
    printf("Index of %d in the array: %d", value, answer);

    return 0;
}
