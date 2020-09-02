#include <stdio.h>
int main()
{
	unsigned short int T, i;
	unsigned long int N;
	scanf("%hd", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%ld", &N);
		while(N > 0)
		{
			if (N == 1) break;
			else if((N%2) == 0) N = N/2;
			else N = (3 * N) + 1;
		}
		(N == 1) ? printf("YES\n") : printf("NO\n");
	}
	return 0;
}