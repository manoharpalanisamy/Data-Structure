#include<stdio.h>
#include<stdlib.h>
void solve (int* A, int N, int half) {

// 15478 8452 8232 874 985 4512
	char *cstr, *tempCstr;
	int length, i, j, temp;
	for (i = 0; i < half; i++)
	{
		cstr = (char*)A[i];
		length = strlen(cstr);
		if(length == 5)
		{
			temp = (int)cstr;
			tempCstr[i] = temp / 10000;
		}
		else if(length == 4)
		{
		    temp = (int)cstr;
			tempCstr[i] = temp / 1000;
		}
		else if(length == 3)
		{
			temp = (int)cstr;
			tempCstr[i] = temp / 100;
		}
		else if(length == 2)
		{
			temp = (int)cstr;
			tempCstr[i] = temp / 10;
		}
		else
		{
			temp = (int)cstr;
			tempCstr[i] = temp;
		}
	}
	for (i = half; i < N; i++)
	{
		temp = A[i] % 10;
		tempCstr[i] = (char)temp;
	}
	temp = (int)tempCstr;
	((temp % 11) == 0) ? printf("OUI") : printf("NON"); 

}

int main() {
    int N, i;
    printf("Enter N :");
    scanf("%d", &N);
    printf("sizeof N = %d\n", sizeof(N));
    int *A[N];
    A = (int*) malloc (N * sizeof(int));
    printf("sizeof A = %d\n", sizeof(A));
    printf("sizeof int = %d\n", sizeof(int));

    for(i = 0; i < N; i++){
    	scanf("%d", &A[i]);
    	printf("A[%d] = %d\n", i, A[i]);
	}
    printf("sizeof = %ld\n", sizeof(A));
 //    for(i = 0; i < N; i++){
 //    	printf("A[%d] = %d\n", i, A[i]);
	// }
    
    // solve(&A, N, N/2);    	
}