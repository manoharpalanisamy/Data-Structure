//
// Created by shekhar on 26-Aug-19.
//
//Working with Pointers
#include "stdio.h"
int main()
{
    int a ;
    int *p;  // or int *p = &a; or int* p = &a;
    a = 10;
    p = &a; // &a address of a
    printf("Working with Pointers\n");
    printf("%d\n", &a);
    printf("Address of P is %d\n", p);
    printf("Value at P is %d\n", *p);

    *p = 12;
    printf("%d\n", *p);

    int b = 20;
    *p = b;
    printf("Address of P is %d\n", p);
    printf("Value at P is %d\n", *p);



}
