//
// Created by shekhar on 26-Aug-19.
//

// Pointers and Arrays
#include "stdio.h"
void main()
{
    int A[] = {2, 4, 5, 8, 1};

    printf(" Pointers and Arrays\n");
    printf("%d\n", A); // address of 1st element in array or &A[0]
    printf("%d\n", &A[1]);

    printf("%d\n", A+1);
    printf("%d\n", A+2);
    printf("---------------\n");
    for (int i=0; i<5; i++)
    {
        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A+i);
        printf("Value = %d\n", A[i]);
        printf("Value = %d\n", *(A+i));
    }

}