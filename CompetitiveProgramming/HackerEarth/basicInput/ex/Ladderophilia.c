#include <stdio.h>
int main()
{
	unsigned short int N, i = 1;
	scanf("%hd", &N);
	while(N)
	{
		if ((i % 3) == 0)
		{
			printf("*****\n");
			N--;
			if(N == 0) 
			{
				printf("*   *\n");
				printf("*   *\n");
			}
		}
		else printf("*   *\n");
		i++;
	}
	return 0;
}