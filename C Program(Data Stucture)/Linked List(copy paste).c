#include <stdio.h>
#include <conio.h>

// Define a structure for a linked list node
struct Node {
    int x;               // Data part of the node
    struct Node *next;   // Pointer to the next node in the linked list
};

int main() {
    // Create linked list nodes and initialize them
    struct Node n5;
    n5.x = 50;
    n5.next = NULL;

    struct Node n4;
    n4.x = 40;
    n4.next = &n5;

    struct Node n3;
    n3.x = 30;
    n3.next = &n4;

    struct Node n2;
    n2.x = 20;
    n2.next = &n3;

    struct Node n1;
    n1.x = 10;
    n1.next = &n2;

    // Create a temporary pointer to traverse the linked list
    struct Node *temp;
    temp = &n1;

    // Display the elements of the linked list
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d\t", temp->x);
        temp = temp->next;
    }
    printf("\n");

    getch();
}
