#include <stdio.h>
int main()
{
	int A[10000], N;
	printf("Enter the size:\n");
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%d ", &A[i]);
	}
	for (int i = 0; i < N; i++)
		printf("A[%d] = %d\n", i, A[i]);
	return 0;
}