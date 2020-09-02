//
// Created by shekhar on 28-Aug-19.
//

#include "stdio.h"
#include <stdlib.h>
void main()
{
    int n=0;
    printf("malloc\n");
    printf("Enter the no elements you want to allocate in memory\n");
    scanf("%d", &n);
    printf("%d\n", n);
    printf("-----------------malloc---------------------\n");
    int *A = (int*)malloc(n * sizeof(int));   // Dynamically Allocate a memory in heap
	printf("sizeof int = %d\n", sizeof(A));
    printf("sizeof A = %d\n", sizeof(A));
    for(int i = 0; i<n; i++)
		A[i] = i+1;

//	free(A);   // assign carbage value in memory
//    A[2] = 10;
//    for (int j = 0; j < n; ++j) {
//        printf("A[%d]=%d\n", j, *(A+j));
//    }
    // printf("-----------------calloc----------------------\n");

//    int *A = (int*)calloc(n, sizeof(int));  // calloc initialize a value to zero in All array elements
//    for(int i = 0; i<n; i++)
//        A[i] = i+1;
//    free(A);
//    for (int j = 0; j < n; ++j) {
//        printf("A[%d]=%d\n", j, *(A+j));
//    }
    // printf("-----------------realloc----------------------\n");
    //  int *B = (int*)realloc(A, 2*n* sizeof(int));
    // printf("Previous Block address = %d, New Block address = %d\n", *A, *B);
    // for (int j = 0; j < 2*n; ++j) {
    //     printf("B[%d]=%d\n", j, *(B+j));
    // }
}

