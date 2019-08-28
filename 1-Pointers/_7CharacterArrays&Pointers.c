//
// Created by shekhar on 26-Aug-19.
//

// Character Arrays and Pointers
#include "stdio.h"
#include "string.h"
void print(char *A) // or A[]
{
//    int i = 0;
    while(*A != '\0')  // *(A+i) or A[i]
    {
        printf("%c", *A); // *(A+i) or A[i]
        A++;
    }
}
void main()
{
    char c[20] = "Hello";  // null termination is implicit
    int len = strlen(c); // null ('\0') will not be added by strlen()
    printf("%s\n", c);
    printf("len=%d\n", len);
    print(c);
}