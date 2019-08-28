//
// Created by shekhar on 26-Aug-19.
//
// Typecasting Pointers
#include "stdio.h"
void main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("Sizeof integers = %d\n", sizeof(int));
    printf("Address = %d, Value = %d \n", p,*p);
    printf("Address = %d, Value = %d \n", p+1,*(p+1)); // *(p+1) some garbage value

    char *p0;
    p0 = (char*)p; // typecasting
    printf("Sizeof character = %d\n", sizeof(char));
    printf("Address = %d, Value = %d \n", p0,*p0);
    printf("Address = %d, Value = %d \n", p0+1,*(p0+1));
    // 00000000 00000000 00000100 00000001 --> 1025
}
