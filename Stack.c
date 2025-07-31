// implement  a stack with static array
#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // maximum size of the stack

int stack[MAX]; // static array to hold stack elements
int size;
int top;

void createStack(int s) {
    size = s; // set the size of the stack
    top = -1; // initialize top to -1 indicating stack is empty
}
// to print stack elements
void printStack(){
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]); // print each element from top to bottom
    }}
    //  Push method
void push(int data) {
    if (top == size) { // check if stack is full
        printf("Stack overflow: stack is already full.\n");
        return;
    };
    top++; // increment top to point to the next empty position
    stack[top] = data; // push the new data onto the stack
    return;
}
    // Pop method

    void pop(){
    if (top == -1) { // check if stack is empty
        printf("Stack underflow: stack is empty.\n");
        return;
    }
    int poppedElement = stack[top]; // get the top element
    top--; // decrement top to remove the element
    printf("Popped element: %d\n", poppedElement); // print the popped element  
    return;}
    // Peek method  
    void peek() {
    if (top == -1) { // check if stack is empty
        printf("Stack is empty.\n");
        return;
    }
    int poppedElement = stack[top]; // get the top element
    printf("Top element: %d\n", stack[top]); // print the top element
    return;

}
int main() {
    createStack(5); // create a stack of size 5
    printStack(); // print the current stack elements
    push(2); // push 20 onto the stack
    push(3); // push 30 onto the stack
    printStack(); // print the current stack elements
    pop(); // pop the top element from the stack
    printStack(); // print the current stack elements
    peek(); // peek at the top element of the stack
    pop();
    pop();
};