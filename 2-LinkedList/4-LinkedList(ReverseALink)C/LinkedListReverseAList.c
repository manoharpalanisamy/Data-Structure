//
// Created by shekhar on 30-Aug-19.
//

/**
// Reverse a Node (Insert a Node a End of the list)
// head is local
#include "stdio.h"
#include "stdlib.h"
struct Node{
    int data;
    struct Node* next;
};

struct Node *Insert(struct Node* head, int data);
void Print(struct Node* head);

struct Node* Reverse(struct Node* head);
void main()
{
    printf(" Reverse a Node..\n");
    struct Node* head = NULL;    // empty list  local variable
    head = Insert(head, 2); // head = 100
    head = Insert(head, 4); // head = 150
    head = Insert(head, 6); // head = 200
    head = Insert(head, 8); // List : 5,6,4,2
    Print(head);
    head = Reverse(head);
    Print(head);
}

// Insert a Node a End of the list
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

// Reverse A Node
// Understand the figure 3-ReverseAlink.png from 4-LinkedList(ReverseALink)C folder
struct Node* Reverse(struct Node* head)
{
    struct Node* current, *prev, *next;
    current = head;
    prev = NULL;
    while (current != NULL)  // this will work if head = null means list is empty and only one node
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev; // finally we have to move prev address to head(global)
    return head;
}

void Print(struct Node* head)
{
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
}

 */

// Reverse a Node (Insert a Node a End of the list)
// head is global
#include "stdio.h"
#include "stdlib.h"
struct Node{
    int data;
    struct Node* next;
};
struct Node* head; // Global variable

void Insert(int data);
void Print();
void Reverse();

void main()
{
    printf(" Reverse a Node..\n");
    head = NULL;    // empty list  Global variable
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(8);
    Print();
    Reverse();
    Print();
}

// Insert a Node a End of the list
void Insert(int data)
{
    struct Node *temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data = data;
    temp1->next = NULL;
    if (head == NULL) head = temp1; // if head is empty we point temp1(1st node) to head
    else{
        struct Node *temp2 = head;
        /**
         * // if head is not equal to NULL we check *(temp2).next != null if it is we move temp2 = temp2->next and
         * replace a NULL value to new Address from temp1 So (temp2->next = temp1) , again check if *(temp2).next != null  */
        while (temp2->next != NULL) temp2 = temp2->next ;
        temp2->next = temp1; // new added address to previously inserted Node
    }
}

// Reverse A Node
// Understand the figure 3-ReverseAlink.png from 4-LinkedList(ReverseALink)C folder
void Reverse()
{
    struct Node* current, *prev, *next;
    current = head;
    prev = NULL;
    while (current != NULL)  // this will work if head = null means list is empty and only one node
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev; // finally we have to move prev address to head(global)
}

void Print()
{
    struct Node* head_hold = head; // hold the Initial head address for Reverse() beacause every time head traverse iteratively upto NULL,
    // So we have to maintain the  Initial head address for display a List
    printf("Head is = %d\n", head);
    printf("List is: ");

    while (head != NULL)  // Traversal  head = 100
    {
        if(head->next != NULL)
            printf(" |%d|%d| --->", head->data, head->next);
        else
            printf(" |%d|%d|", head->data, head->next);
        head = head->next; //  here head to be NUll(0)
    }
    printf("\n");
    head = head_hold; // get back Original head address
}
