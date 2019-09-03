//
// Created by shekhar on 30-Aug-19.
//
// Print Doubly Linked list

#include <winioctl.h>
#include "stdio.h"
#include "stdlib.h"
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;

};

struct Node* head; // Global variable

struct Node* getNewNode(int x){

    struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); // local variable
    temp->data = x;
    temp->prev = NULL;
    temp->next = NULL;
    return temp;

}

// Same as Insert Node at beginning examples
void insertAtHead(int x){
    struct Node* newNode = getNewNode(x);
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    head->prev = newNode; //  go through figure 9-DoublyLinkedList.png from 7-DoublyLinkedList folder
    newNode->next = head;
    head = newNode;
}

// Print() is like a Simply linked list
void Print()
{
    struct Node* temp = head ;
    printf("forward\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void ReversePrint()
{
    struct Node* temp = head;
    if(head == NULL) return;  // empty list exit conditions

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // Traversing backward using prev pointers
    printf("Reverse:\n");
    while (temp != NULL)
    {

        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

void main()
{
    printf("Print Doubly Linked list\n");
    head = NULL;  // empty list
    insertAtHead(2); Print(); ReversePrint();
    insertAtHead(4); Print(); ReversePrint();
    insertAtHead(6); Print(); ReversePrint();


}

