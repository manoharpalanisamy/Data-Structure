//
// Created by shekhar on 27-Aug-19.
//

#include "stdio.h"
void main()
{
    int A[] = {1, 2, 3, 4, 5};
    int *p = A; // &A[0] or A
    printf("%d\n", A);
    printf("%d\n", A+1);
    printf("%d\n", &A);

    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    printf("%d\n", *(p+2));
    printf("%d\n", *(p+3));
    int B[2][3];

}