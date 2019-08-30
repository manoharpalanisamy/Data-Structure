// Linked List (Insert element at beginning of the word)!

// head is global variable
#include <stdio.h>
#include "stdlib.h"
struct  Node{
    int data;
    struct Node* next;
};

struct Node* head;  // Global Variable
void Insert(int x);
void Print();

int main() {
    head = NULL;
    printf("Linked List (Insert element at beginning of the word)!\n");
    printf("struct size=%d\n", sizeof(head));
    printf("How many Numbers? \n");
    int i, n, x;
    scanf("%d", &n);
    for ( i = 0; i < n; ++i) {
        printf("Enter the numbers \n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }

    return 0;
}

void Insert(int x)
{
//  Look at the fig 6-LinkedListAlgorithm(InsertingAtBeginning).png to Understand the concept behind
    struct Node *temp;
    temp = (struct Node*) malloc(sizeof(struct Node));   // Address get from Heap
    temp->data = x;  // or *temp.data = 2
    temp->next = head;  // Old address
    head = temp ;   // New address from heap
}

void Print()
{
    struct Node * temp;
    temp = head; // we do nor lose head info so we create temp
    printf("List is: ");
    while (temp != NULL)  // Traversal  temp = 200
    {
        printf(" %d|%d --->", temp->data, temp->next); // 1 | 300
        temp = temp->next; // 300
    }
    printf("\n");
}

/**
// head is Local variable
#include <stdio.h>
#include "stdlib.h"
struct  Node{
    int data;
    struct Node* next;
};

struct Node* Insert(int x, struct Node* head);
void Print();

int main() {
    struct Node* head;  // Local Variable
    head = NULL;
    printf("Linked List (Insert element at beginning of the word)!\n");
    printf("struct size=%d\n", sizeof(head));
    printf("How many Numbers? \n");
    int i, n, x;
    scanf("%d", &n);
    for ( i = 0; i < n; ++i) {
        printf("Enter the numbers \n");
        scanf("%d", &x);
        head = Insert(x, head);
        Print(head);
    }

    return 0;
}

struct Node* Insert(int x, struct Node* head)
{
//  Look at the fig 6-LinkedListAlgorithm(InsertingAtBeginning).png to Understand the concept behind
    struct Node *temp;
    temp = (struct Node*) malloc(sizeof(struct Node));   // Address get from Heap
    temp->data = x;  // or *temp.data = 2
    temp->next = head;  // Old head
    head = temp ;   // New address from heap
     return head;
}

void Print(struct Node* head)
{
//    struct Node * temp;   Not using temp variable here because head is passed as Arg
//    temp = head; // we do nor lose head info so we create temp
    printf("List is: ");
    while (head != NULL)  // Traversal  head = 200
    {
        printf(" %d|%d --->", head->data, head->next); // 1 | 300
        head = head->next; // 300
    }
    printf("\n");
}

 */