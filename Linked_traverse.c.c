#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

void traverse(struct node *head) {
   struct node *currentNode = head;

   printf("Linked List: ");

   while (currentNode != NULL) {
      printf("%d ", currentNode->data);
      currentNode = currentNode->next;
   }
   printf("\n");
}

int main() {
   struct node *head = NULL;
   struct node *second = NULL;
   struct node *third = NULL;

   // allocate 3 nodes in the heap
   head = (struct node*)malloc(sizeof(struct node));
   second = (struct node*)malloc(sizeof(struct node));
   third = (struct node*)malloc(sizeof(struct node));

   // assign data in first node
   head->data = 1;
   // Link first node with the second node
   head->next = second;

   // assign data to second node
   second->data = 2;
   // Link second node with the third node
   second->next = third;

   // assign data to third node
   third->data = 3;
   // terminate the list after the third node
   third->next = NULL;

   // traverse the linked list
   traverse(head);

   return 0;
}