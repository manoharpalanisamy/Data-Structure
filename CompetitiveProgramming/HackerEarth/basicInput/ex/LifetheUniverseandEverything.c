#include <stdio.h>
int main()
{
	unsigned short int N = 0;
	while(1)
	{
		scanf("%hd", &N);
		if(N == 42) break;
		else printf("%hd\n", N); 
	}
	return 0;
}