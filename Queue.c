#include <stdio.h>

#define MAX_SIZE 100 // maximum size of queue

int queue[MAX_SIZE]; // array to represent queue
int front = -1; // front of queue
int rear = -1; // rear of queue

void enqueue(int element) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue overflow!\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = element;
        printf("Enqueued %d into queue.\n", element);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow!\n");
    } else {
        int dequeued = queue[front];
        front++;
        printf("Dequeued %d from queue.\n", dequeued);
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    enqueue(40);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}