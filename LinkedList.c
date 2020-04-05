/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node *head = NULL; // global variable

void Insert(int data);
void Print();
void Delete(int pos);
void ReversePrint();
void ReversePrintUsingRecursion(struct Node* head);

int main()
{
    
    printf("Hello World\n");
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(8);
    Insert(10);
    
    Print();
    
    Delete(5);
    Print();
    // Delete(1);
    // Print();
    // Delete(1);
    // Print();
    // Delete(1);
    // Print();
    // Delete(1);
    // Print();
  
    // ReversePrint();
    // Print();
    
    ReversePrintUsingRecursion(head); // LIFO (STACK)

    return 0;
}

/** Recursive Method to Print an elements
 * 
    ReversePrintUsingRecursion(100 -> next)
                    |    
    ReversePrintUsingRecursion(150 -> next)
                    |
    ReversePrintUsingRecursion(200 -> next)
                    |
    ReversePrintUsingRecursion(250 -> next)
                    |
    ReversePrintUsingRecursion(0) // terminates the Recursion
                    |
    printf()
*/
void ReversePrintUsingRecursion(struct Node* p)
{
    
    if(p == NULL)
    {
        return;
    }
    ReversePrintUsingRecursion(p->next);
    printf("|%d|%d| -> ", p->data, p->next);
}


// Iterative Method
void ReversePrint()
{
    struct Node *current, *prev, *next;
    prev = NULL;
    current = head; // initially head value 100
    while(current != NULL)  
    {
        next = current -> next; // current->next = 150
        current -> next = prev; // set current->next = NULL
        prev = current; // move prev points to current Node 
        current = next; // move current to next Node
    }
    head = prev; // finally current points to NULL so,we have to set head to prev;
}

// Delete at particular position
void Delete(int pos)
{
    struct Node* temp = head; // 100
    
    // if(temp->next == NULL)
    // {
    //     printf("No elements in List (Heap)\n");
    //     head = NULL;
    //     return;
    // }
    if(pos == 1)
    {
        if(head == NULL)
        {
            printf("No elements in List (Heap)\n");
            return;
        }
        head = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; i < pos-2 ; i++) {   // go to n-1 th node
         /* code */
        temp = temp -> next; // 150    
    }
    struct Node *temp1 = temp -> next; // n th node 200
    temp -> next = temp1->next; // 250  // n+1 node to n-1 node
    free(temp1);
        
}


// Insert at Begining of the node 
// void Insert(int data)
// {
//     Node *temp = new Node();
//     temp->data = data;
//     temp->next = NULL;
    
//     if(head == NULL)
//     {
//         head = temp;
//         return;
//     }
    
//     // Node *temp1 = head;
//     temp -> next = head;
//     head = temp;
// }

// Insert at End of the Node
void Insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    
    if(head == NULL)
    {
        head = temp;
        return;
    }
    
    Node *temp1 = head;
    while(temp1-> next != NULL)
    {
        temp1 = temp1 -> next ;
    }
    
    temp1 -> next = temp;
}

//   |2|31095872| -> |4|31095904| -> |6|31095936| -> |8|0| 
// Traverse and Print elements
void Print()
{
    struct Node *temp = head;
    while(temp != NULL)
    {
        printf("|%d|%d| -> ", temp->data, temp->next);
        temp = temp->next;
    }
    printf("\n");
}