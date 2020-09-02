#include <stdio.h>
int main()
{
	int N, temp;
	scanf("%d", &N);
	temp = N;
	while(temp > 0)
	{

		temp = temp - 1 ;
		if (temp == 0) break;
		else N = N * temp;
	}
	printf("%d\n", N);
	return 0;
}