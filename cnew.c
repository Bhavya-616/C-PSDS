 #include <stdio.h>
 #include <stdlib.h>

 // creating the struct for DLL
 struct Node{
    int data;           // to store the current node's data
    struct Node* prev;  // to point to the previous node
    struct Node* next;  // to point to the next node
    }; 
// creaating the traverse method
void traverse(struct Node* head_ref){
    struct Node* current=head_ref; // start from the head node
    while(current!=NULL){           // traverse until the end of the list
        printf("%d-> ", current->data); // print the current node's data
        current=current->next;         // move to the next node
    }
    printf("NULL\n"); // printing NULL at the end
    return;

}
// inserting a new node at the end of the list
void insertAtEnd(struct Node* head_ref, int new_data){
    // creating a new node
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data; // assign data to the new node
    new_node->next = NULL; // new node's next pointer is NULL
    new_node->prev = NULL; // new node's previous pointer is NULL

    if (head_ref == NULL) { // if the list is empty
        head_ref = new_node; // make the new node the head
        return;
    }
    struct Node* last = head_ref; // start from the head node
    while (last->next != NULL) { // traverse to the last node
        last = last->next; // move to the next node
    }
    last->next = new_node; // link the last node to the new node
    new_node->prev = last; // link the new node back to the last node
}
// inserting a new node at the beginning of the list
void insertingAtBeginning(struct Node** head_ref, int new_data){
    // creating a new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data; // assign data to the new node
    new_node->next = *head_ref; // new node's next pointer points to the current head
    new_node->prev = NULL; // new node's previous pointer is NULL 

    struct Node* current = *head_ref; // start from the head node
    new_node->next = current; // link the new node to the current head
    current->prev = new_node; // link the current head back to the new node
    *head_ref = new_node; // update the head to point to the new node
    
    return;
}
    


// creating the main method
int main(){
    // create the head node
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    head->data=3;          // assign data to the head node  
    head->prev=NULL;      // head node's previous pointer is NULL
    head->next=NULL;      // head node's next pointer is NULL

    traverse(head); // call the traverse method to print the list
    insertAtEnd(head, 5); // insert a new node with data 5 at the end
    traverse(head); // call the traverse method again to print the updated list
    insertingAtBeginning(&head, 1); // insert a new node with data 1 at the beginning
    traverse(head); // call the traverse method again to print the updated list

}

 
