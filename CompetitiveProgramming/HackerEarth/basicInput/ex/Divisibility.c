#include <stdio.h>
int main()
{
	unsigned long N;
	scanf("%ld", &N);
	unsigned long A[N];
	for (int i = 0; i < N; ++i) scanf("%ld ", &A[i]); 
	((A[N - 1] % 10) == 0) ? printf("Yes\n") : printf("No\n");
	return 0;
}