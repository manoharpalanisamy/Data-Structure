//
// Created by shekhar on 26-Aug-19.
//
// Pointers Arithmetic
#include "stdio.h"
void main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("Address of p is %d\n", p);
    printf("Value at p is %d\n", *p);
    printf("Size of integer %d\n", sizeof(p));

    printf("Address of p+1 is %d\n", p+1); // increment pointers to 4 bytes
    printf("Value at p+1 is %d\n", *(p+1)); // same as p address need to solve

}