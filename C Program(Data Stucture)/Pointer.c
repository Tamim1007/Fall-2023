#include <stdio.h>
#include <conio.h>

int main() {
    int x;        // Declare an integer variable
    int *p;       // Declare a pointer to an integer

    x = 2;        // Assign the value 2 to the integer variable x
    p = &x;       // Assign the address of x to the pointer p

    // Display addresses
    printf("Address:\n");
    printf("%d\n", &x);   // Print the address of x using the address-of operator &
    printf("%d\n", p);    // Print the value stored in the pointer p (which is the address of x)

    // Display values
    printf("Value:\n");
    printf("%d\n", x);    // Print the value of x
    printf("%d\n", *p);   // Print the value at the address stored in the pointer p using the dereference operator *

    getch(); // Wait for a key press
}
