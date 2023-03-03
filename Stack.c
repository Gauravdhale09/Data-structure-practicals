#include <stdio.h>

#define MAX_SIZE 100 // maximum size of stack

int stack[MAX_SIZE]; // array to represent stack
int top = -1; // top of stack

void push(int element) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack overflow!\n");
    } else {
        top++;
        stack[top] = element;
        printf("Pushed %d into stack.\n", element);
    }
}

void pop() {
    if (top < 0) {
        printf("Stack underflow!\n");
    } else {
        int popped = stack[top];
        top--;
        printf("Popped %d from stack.\n", popped);
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    pop();
    push(40);
    pop();
    pop();
    pop();
    pop();
    return 0;
}