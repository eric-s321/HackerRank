#include <stdlib.h>
#include <stdio.h>


typedef struct Node{
    int data;
    struct Node *next;
} Node;

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
    
    head = insertAtHead(head, 50);

    printf("\n");
    printList(head);

}
