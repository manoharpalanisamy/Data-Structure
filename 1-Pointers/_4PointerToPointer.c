//
// Created by shekhar on 26-Aug-19.
//

// Pointer to Pointer
#include "stdio.h"
void main()
{
    int x = 5;
    int* p = &x;
    *p = 6;
    int** q = &p;
    int*** r = &q;

    printf("Pointer to Pointer\n");
    printf("%d\n", *p); // 6
    printf("%d\n", *q); // &p
    printf("%d\n", **q); // 6
    printf("%d\n", **r); // &q
    printf("%d\n", ***r); // 6
    ***r = 10; // *p = 10
    printf("x = %d\n", x); //x = 10

}