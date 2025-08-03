// Stack with Linked List Implementation

#include <stdio.h>
#include <stdlib.h>

// create a struct node
struct Node {
    int data; // data part
    struct Node* next; // pointer to the next node
};
// to store the top element refrence
struct Node* top;

// to create a stack
void createStack(){
    top = NULL; // initialize top to NULL indicating stack is empty

}
void printStack(){
    printf("Stack elements: ");
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    // traverse the stack and print elements
 struct Node* current = top; // start from the top
    while (current != NULL) {
        printf("%d ", current->data); // print each element
        current = current->next; // move to the next node
    }
    printf("\n");
}   

    // push operation
    void push(int data){
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); // allocate memory for the new node
        new_node->data = data; // set the data for the new node
        new_node->next = top; // point the new node to the current top

        top = new_node; // update the top to the new node
        return;

    }

    // pop operation
    void pop(){
        if (top == NULL) { // check if stack is empty
            printf("Stack is empty.\n");
            return;
        }
        int topElement = top->data; // get the top element
        printf("Top element: %d\n", topElement); // print the popped element
        top = top->next; // update the top to the next node
        return;
    }

    // peek operation
    void peek(){
        if (top == NULL) { // check if stack is empty
            printf("Stack is empty.\n");
            return;
        }
        int topElement = top->data; // get the top element
        printf("Peek element: %d\n", topElement); // print the popped element
        return;
    }
 

int main(){
    createStack(); // create a stack
    printStack(); // print the current stack elements
    push(2); 
    push(3); 
    printStack(); 
    pop(); // pop the top element from the stack
    printStack();
    peek(); // peek at the top element of the stack
    push(4);
    push(5); 
    printStack(); 
    peek();



}
