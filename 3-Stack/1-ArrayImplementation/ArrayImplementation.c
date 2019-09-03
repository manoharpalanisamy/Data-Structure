// Stack - Array based Implementation

#include "stdio.h"
#define MAX_SIZE 101

int A[MAX_SIZE];
int top = -1;

void Push(int x)
{
  //  top++;
  //  A[top] = x;
  // OR
  if(top == MAX_SIZE)   // if stack full
  {
      printf("Error: Stack Overflow\n");
      return;
  }
  A[++top] = x;  // pre-increment
}

void Pop()
{
    if(top == -1)  // if stack empty
    {
        printf("Error: No element to pop\n");
        return;
    }
    top--;
}

int Top()
{
    return A[top];
}

void Print()
{
    printf("top=%d\n", top);
    for (int i = 0; i <= top; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    Push(2); Print();
    Push(5); Print();
    Push(10); Print();
    Pop(); Print();
    Push(12); Print();

}