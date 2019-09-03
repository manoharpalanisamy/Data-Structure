//
// Created by shekhar on 30-Aug-19.
//
// Print Linked list Using Recursion Reverse an element  (Important Need to Work not yet finished..)

#include "stdio.h"
#include "stdlib.h"
struct Node{
    int data;
    struct Node* next;
};

struct Node *Insert(struct Node* head, int data);
void Reverse(struct Node* head);
void main()
{
    printf("Print Linked list Using Recursion\n");
    struct Node* head = NULL;    // empty list  local variable
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 5);
    Reverse(head);

}

// Insert a Node a End of the list  <-------------------------------------------------------------------|
// To illustrate everything by draw a figure which consists of 4 node from head 100 , 150, 200, 250 ----|
struct Node *Insert(struct Node* head, int data)
{
    struct Node *temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data = data;
    temp1->next = NULL;
    if (head == NULL) head = temp1; // if head is empty we point temp1(1st node) to head
    else{
        struct Node *temp2 = head;
        //
        // if head is not equal to NULL we check *(temp2).next != null if it is we move temp2 = temp2->next and
        // replace a NULL value to new Address from temp1 So (temp2->next = temp1) , again check if *(temp2).next != null
        while (temp2->next != NULL) temp2 = temp2->next ;
        temp2->next = temp1; // new added address to previously inserted Node
    }
    return head;
}

// Very important
void Reverse(struct Node* p)
{

    // Recursive Method (1-Method Print the value in as it is)
//    if(p == NULL) return; // Exit condition
//    printf("%d ", p->data); // get the value in the node
//    Print(p->next);  // get the address and call to Print() recursively until we reach p == 0
//    printf("\n");

    // Recursive Method (2-Method Print the value in as Reverse)
    if(p == NULL) return; // Exit condition
    Reverse(p->next);  // get the address and call to Print() recursively until we reach p == 0
    printf("%d ", p->data); // get the value in the node


    /** Iterative Method
     *
    printf("Head is = %d\n", head);
    printf("List is: ");
    while (head != NULL)  // Traversal  temp = 200
    {
        if(head->next != NULL)
            printf(" |%d|%d| --->", head->data, head->next); // 1 | 300
        else
            printf(" |%d|%d|", head->data, head->next); // 1 | 300
        head = head->next; // 300
    }
    printf("\n");

     */

}