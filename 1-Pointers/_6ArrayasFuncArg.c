//
// Created by shekhar on 26-Aug-19.
//

// Arrays as Function Arg
#include "stdio.h" // call by reference , A is modified in called Function
void Double(int* A, int size)  // int* A by compiler or int A[]
{
    int sum = 0;
    printf("Double() sizeof A = %d, A[0] = %d\n", sizeof(A), sizeof(A[0]));
    for (int i = 0; i < size; ++i) {
        A[i] = 2*A[i]; // A[i] as *(A+i)
     }
}
void main()
{

    printf("Arrays as Function Arg\n");
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A)/ sizeof(A[0]);
    printf("main() sizeof A = %d, A[0] = %d\n", sizeof(A), sizeof(A[0]));
    printf("Address of A = %d\n", &A);
    printf("Address of A = %d\n", A);
    printf("Address of A = %d\n", A+0);
    printf("Address of A = %d\n", &A[0]);

    Double(A, size); // &A[0]
    for (int i = 0; i < size; ++i) {
        printf("A[%d] = %d\n", i, A[i]);
    }
}