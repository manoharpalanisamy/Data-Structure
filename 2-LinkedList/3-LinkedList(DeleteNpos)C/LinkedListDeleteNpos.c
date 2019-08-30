//
// Created by shekhar on 30-Aug-19.
//

// Delete a Node in N-position

#include "stdio.h"
#include "stdlib.h"
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int data);
void Print();
void Delete(int n);
void main()
{
    printf("Delete a Node in N-position..\n");
    head = NULL;    // empty list
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5); // List : 2,4,6,5
    Print();
    int n;
    printf("Enter a Position\n");
    scanf("%d", &n);
    Delete(n);
    Print();
}

// Insert a Node a Begining of the list
void Insert(int data)
{
//  Look at the fig 6-LinkedListAlgorithm(InsertingAtBeginning).png to Understand the concept behind
    struct Node *temp;
    temp = (struct Node*) malloc(sizeof(struct Node));   // Address get from Heap
    temp->data = data;  // or *temp.data = 2
    temp->next = head;  // Old address
    head = temp ;   // New address from heap
}

// Understand the figure 1-LinkedList(DeleteNpos).png from folder 3-LinkedList(DeleteNpos)
// Delete a Node at Position N
void Delete(int n)
{
    struct Node* temp1 = head;
    if (n==1)   // delete a node in 1st Position
    {
        head = temp1->next; // head now pointed to Second node of head
        free(temp1);
        return;
    }
    for (int i = 0; i < n-2; ++i) {   // move to N-1 node
        temp1 = temp1->next;   // Initially temp1 points to head(100) has data = 2 and next = 150 , temp1 points to N-1 node (150) address
    }
    struct Node *temp2 = temp1->next; // temp2(200) points to N node
    temp1->next = temp2->next; //
    free(temp2);
}

void Print()
{
    struct Node * temp;
    temp = head; // we do nor lose head info so we create temp
    printf("Head is = %d\n", head);
    printf("List is: ");
    while (temp != NULL)  // Traversal  temp = 200
    {
//        printf("%d ", temp->data);
        if(temp->next != NULL)
            printf(" %d|%d --->", temp->data, temp->next); // 1 | 300
        else
            printf(" %d|%d", temp->data, temp->next); // 1 | 300
        temp = temp->next; // 300
    }
    printf("\n");
}