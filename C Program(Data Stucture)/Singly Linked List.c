#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Define a structure for a linked list node
struct Node {
    int value;
    struct Node *next;
};

// Declare global pointers to the head and tail of the linked list
struct Node *head = NULL;
struct Node *tail = NULL;

// Function to create the first node in the linked list
void firstNode(int v) {
    // Allocate memory for a new node
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));

    // Set the value of the node and make it the only node in the list
    n->value = v;
    n->next = NULL;
    head = n;
    tail = n;
}

// Function to add a new node to the end of the linked list
void addNode(int v) {
    // Allocate memory for a new node
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));

    // Link the new node to the current tail and update the tail
    tail->next = n;
    n->value = v;
    n->next = NULL;
    tail = n;
}

// Function to print the values of the linked list
void printlist() {
    struct Node *temp;
    temp = head;
    int i = 0;

    // Traverse the linked list and print each node's value
    printf("Array:");
    while (temp != NULL) {
        printf("\t%d", temp->value);
        temp = temp->next;
        i++;
    }

    // Print the total number of nodes, and the values of the head and tail nodes
    printf("\nTotal Node %d - Head: %d, Tail: %d", i, head->value, tail->value);
}

// Main function
int main() {
    // Create the first node with a value of 10
    firstNode(10);

    // Add three more nodes with values 20, 30, and 40
    addNode(20);
    addNode(30);
    addNode(40);

    // Print the linked list
    printlist();

    // Wait for a key press before exiting
    getch();
}
