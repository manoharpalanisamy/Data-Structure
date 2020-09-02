#include <stdio.h>
int main()
{
	unsigned short int T, N = 0, i, j = 0, temp = 1;
	char star = '*', ash = '#';
	scanf("%hu", &T);
	for (int x = 0; x < T; x++)
	{
		scanf("%hu",& N);	
		while(N)
		{	
			j = (N * 2) - 2;
			i = temp;
			while(i)
			{   	
				printf("%c", star);
				i--;
			}
			while(j > 0)
			{
				printf("%c", ash);
				j--;
			}
			i = temp;
			while(i)
			{
				printf("%c", star);
				i--;
			}
			temp++;
			N--;
			printf("\n");
		}
		temp = 1;
	}
	return 0;
}