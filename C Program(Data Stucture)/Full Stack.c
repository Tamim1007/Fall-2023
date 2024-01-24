#include<stdio.h>

#define max_size 5

int top = -1;          // Initialize top of the stack to -1
int Array[max_size];    // Declare an array to represent the stack

// Function to push a value onto the stack
void push(int value) {
    top++;
    if (top >= max_size) {
        printf("Overflow\n");  // Check for overflow condition
        top--;                // Reset top to the previous value
        return;               // Exit the function
    }
    Array[top] = value;       // Push the value onto the stack
}

// Function to pop a value from the stack
int pop() {
    if (top < 0) {
        printf("Underflow\n"); // Check for underflow condition
        return 0;              // Return 0 indicating failure
    }
    int x = Array[top];        // Retrieve the top element
    Array[top] = 0;            // Clear the top element
    top--;                    // Decrement top to move to the next element
    return x;                 // Return the popped value
}

// Function to peek at the top of the stack
int peek() {
    return Array[top];         // Return the top element without removing it
}

// Function to check if the stack is full
void IsFull() {
    if (top == max_size - 1) {
        printf("True\n");
    }
}

// Function to check if the stack is empty
void IsEmpty() {
    if (top == -1) {
        printf("False\n");
    }
}

int main() {
    // Push values onto the stack
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    /*
    pop();
    pop();
    pop();
    pop();
    pop();
    push(60);
    */

    // Check if the stack is full or empty
    IsFull();
    IsEmpty();

    // Peek at the top of the stack
    printf("%d\n", peek());

    return 0;
}
