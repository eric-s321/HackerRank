#include <stdlib.h>
#include <stdio.h>


typedef struct Node{
    int data;
    struct Node *next;
} Node;

/*
 * Insert Node at given position in the linked list.
 * First element of linked list is at position 0.
 */
Node * insertNth(Node *head, int value, int position){

    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data = value;

    if(head == NULL && position != 0){
        printf("Error. Can only insert at position 0 on an empty list.\n");
        exit(EXIT_FAILURE);
    }
    if(head == NULL && position == 0){ //We are inserting into an empty linked list
        newNode->next = NULL;
        return newNode;    
    }
    if(head != NULL && position == 0){
        newNode->next = head;
        return newNode;
    }
    
    Node *temp = head;
    while(position > 1){
        temp = temp->next;
        position--;
    }    
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

/*
 * Delete a Node at position in linked list
 * List begins at position 0
 * Assuming 0 < position < # elements in linked list
 */
Node * deleteNode(Node *head, int position){

    if(position == 0){ //Deleting first element in list
        Node *newHead = (Node *) malloc(sizeof(Node));
        newHead = head->next;  //will return list starting at index 1
        free(head);
        return newHead;
    }

    Node *temp = head;
    while(position - 1 > 0){ //traverse linked list until at Node before position.
        temp = temp->next;
        position--;
    }
    temp->next = temp->next->next; //Make Node before pos point to Node after pos.
    free(temp->next);  //Free memory occupied by Node at position.
    return head;
}

Node *insertAtHead(Node *head, int value){
    Node *newHead = (Node *) malloc(sizeof(Node));
    newHead->data = value;
    newHead->next = head;
    return newHead;
}

Node * insertAtTail(Node *head, int value){
    if(head == NULL){ //value being passed in will be the Node at the head of the currently empty list
        head = (Node *) malloc(sizeof(Node)); 
        head->data = value;
        head->next = NULL;
        return head;
    }
    
    Node *temp = head;
    while(temp->next != NULL){  //traverse list until we reach the end
        temp = temp->next;
    }
    Node *newNode = (Node *) malloc(sizeof(Node));  //Create new Node to store value
    newNode->data = value;
    newNode->next = NULL;
    temp->next = newNode;   //Make the last Node in the linked list point to the new Node
    return head;
}

void printList(Node *head){
    Node *temp = head;
    while(temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void reversePrint(Node *head){
    if (head == NULL)
        return;

    reversePrint(head->next);
    printf("%d\n", head->data); 
}

Node * reverseList(Node *head){
    Node *prevNode = NULL;
    Node *currNode = head;
    Node *nextNode = NULL;

    while(currNode != NULL){
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }

    return prevNode;
}

Node * deleteList(Node *head){
    Node *temp = head;
    Node *nextNode;

    while(temp != NULL){
        nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    head = NULL;
    return head;
}

void deleteListRef(Node **headRef){
    Node *temp = *headRef;
    Node *nextNode;

    while(temp != NULL){
        nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    *headRef = NULL;
}


int main(int argc, const char *argv[]){
    int listLength;

    printf("Length of linked list: ");
    scanf("%d", &listLength);

    Node *head = NULL;  //initialize head of linked list to NULL

    for (int i = 0; i < listLength; i++){  //Add data to linked list
        int value;
        scanf("%d", &value); 
        head = insertAtTail(head, value);
    }

    printList(head);
    head = reverseList(head); 
    printf("\n");
    printList(head);
    
//    head = deleteList(head);
    deleteListRef(&head);

    head = insertAtHead(head, 5);
    printf("\n");
    printList(head);

//    head = deleteList(head);
    deleteListRef(&head);

/*
    head = insertNth(head, 3,0);
    head = insertNth(head, 5,1);
    head = insertNth(head, 4,2);
    head = insertNth(head, 2,3);
    head = insertNth(head, 10,1);

    printf("\nDeleting list...\n");
    head = deleteList(head);
    printf("\nPrinting list..\n");
    printList(head);
*/
}
