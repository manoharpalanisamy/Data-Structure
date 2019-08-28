#include <stdio.h>

int main() {
    int  a ;
    a = 10;
    int *p ;
    p = &a;
    printf("Hello, Pointers!\n");
    printf("a=%d\n", a);
    printf("&a=%d\n", &a);
    printf("&p=%d\n", &p);
    printf("p=%d\n", p);
    printf("*p=%d\n", *p);
    *p = 25;
    printf("After *p=%d\n", *p);
    return 0;
}