//
// Created by shekhar on 29-Aug-19.
//
// Linked List (Insert element at N-Position)!

// head is global variable
#include "iostream"
#include <stdio.h>
#include "stdlib.h"
struct  Node{
    int data;
    struct Node* next;
};

struct Node* head;  // Global Variable
void Insert(int data, int n);
void Print();

int main() {
    head = NULL; // empty list
    Insert(2,1); // list: 2
    Insert(3,2); // list: 2,3
    Insert(4,1); // list: 4,2,3
    Insert(5,2); // list: 4,5,2,3
    Print();

    return 0;
}

void Insert(int data, int n)
{
//  Look at the fig 1-LinkedList(Npos).png & 2-LinkedList(Npos).png to Understand the concept behind
    struct Node* temp1 = new Node();   //  write c++ way , Address get from Heap
    temp1->data = data;  // or *temp.data = 2
    temp1->next = NULL;  // Old address
    if(n == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    struct Node* temp2 = head;
    for (int i = 0; i < n-2; ++i) {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void Print()
{
    struct Node *temp = head; // we do nor lose head info so we create temp
    printf("List is: ");
    while (temp != NULL)  // Traversal  temp = 200
    {
        printf(" %d|%d --->", temp->data, temp->next); // 1 | 300
        temp = temp->next; // 300
    }
    printf("\n");
}
