#include <stdio.h>
int main()
{
	unsigned short int N, i;
	scanf("%hd", &N);
	short int A[N];
	for (i = 0; i < N; i++) scanf("%d", &A[i]);
	for (i = 0; i < N; i++) printf("%d ", A[i]);
	return 0;
}