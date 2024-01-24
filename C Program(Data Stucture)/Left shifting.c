#include <stdio.h>

int main() {
    // Declaring an array of size 5
    int n = 5;
    int a[n];

    //random value assign
    for (int i = 0 ; i <n ;i++){
        a[i] = rand() % 100 ;//random 2 digit value
    }

    printf("Old Array: ");
    for (int i = 0 ; i <n ; i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    // Shifting elements (copying elements from a higher index to a lower index)
    for (int i = 0; i < 2; i++) {
        a[i] = a[i + 3];
    }

    // Setting the remaining elements to 0
    for (int i = 3; i < n; i++) {
        a[i] = 0;
    }

    // Printing the modified array
    printf("Modified Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}

