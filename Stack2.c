// implement  a stack with static array
#include <stdio.h>
#include <stdlib.h>



int *stack;
int size;
int top;

void createStack(int s) {
    stack = (int*)malloc(s * sizeof(int)); // allocate memory dynamically
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
    printf("Peek element: %d\n", stack[top]); // print the top element
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
    push(4); // push 40 onto the stack
    push(5); // push 50 onto the stack
    peek(); // peek at the top element of the stack
    printStack();
    pop();
    printStack();
    
};




// 2 example of stack with dynamic array(Copilot)
// #include <stdio.h>
// #include <stdlib.h>

// int *stack;
// int size;
// int top;

// void createStack(int s) {
//     size = s;
//     top = -1;
//     stack = (int*)malloc(size * sizeof(int)); // allocate memory dynamically
//     if (stack == NULL) {
//         printf("Memory allocation failed.\n");
//         exit(1);
//     }
// }

// void printStack() {
//     for (int i = top; i >= 0; i--) {
//         printf("%d ", stack[i]);
//     }
//     printf("\n");
// }

// void push(int data) {
//     if (top == size - 1) {
//         printf("Stack overflow: stack is already full.\n");
//         return;
//     }
//     top++;
//     stack[top] = data;
// }

// void pop() {
//     if (top == -1) {
//         printf("Stack underflow: stack is empty.\n");
//         return;
//     }
//     int poppedElement = stack[top];
//     top--;
//     printf("Popped element: %d\n", poppedElement);
// }

// void peek() {
//     if (top == -1) {
//         printf("Stack is empty.\n");
//         return;
//     }
//     printf("Top element: %d\n", stack[top]);
// }

// int main() {
//     createStack(5);
//     push(10);
//     push(20);
//     push(30);
//     printStack();
//     pop();
//     printStack();
//     peek();
//     free(stack); // free the allocated memory
//     return 0;
// }