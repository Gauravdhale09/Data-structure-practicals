#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to insert a node at the beginning of a linked list
struct Node* insertAtBeginning(struct Node *head, int newData) {
    // Create a new node and assign it the new data
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;

    // Make the new node the new head of the linked list
    newNode->next = head;
    head = newNode;

    return head;
}

// Function to traverse and print the values of all nodes in the linked list
void traverseLinkedList(struct Node *head) {
    struct Node *currentNode = head;

    while (currentNode != NULL) {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    }
}

int main() {
    // Initialize the linked list
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // Allocate memory for the nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Assign values to the nodes and link them

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    // Traverse the original linked list and print the values of all nodes
    printf("Original Linked List: ");
    traverseLinkedList(head);
    printf("\n");

    // Insert a new node at the beginning of the linked list
    head = insertAtBeginning(head, 0);

    // Traverse the updated linked list and print the values of all nodes
    printf("Updated Linked List: ");
    traverseLinkedList(head);
    printf("\n");

    return 0;
}