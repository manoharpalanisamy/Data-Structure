#include <stdio.h>
/**
LOGICS   
------
7 8 9 10 11 12
6 5 4  3  2  1

 */
int main()
{
	int mod, T = 0, N = 0;
	scanf("%d", &T);
	
	for (int i = 0; i < T; ++i)
	{	
		scanf("%d", &N);
		mod = N % 12;
		switch(mod)
		{
			case 0 :
			printf("%d WS\n", N - 11);
			break;

			case 1 :
			printf("%d WS\n", N + 11);
			break;

			case 2 :
			printf("%d MS\n", N + 9);
			break;

			case 3 :
			printf("%d AS\n", N + 7);
			break;			

			case 4 :
			printf("%d AS\n", N + 5);
			break;

			case 5 :
			printf("%d MS\n", N + 3);
			break;

			case 6 :
			printf("%d WS\n", N + 1);
			break;

			case 7 :
			printf("%d WS\n", N - 1);
			break;

			case 8 :
			printf("%d MS\n", N - 3);
			break;

			case 9 :
			printf("%d AS\n", N - 5);
			break;

			case 10 :
			printf("%d AS\n", N - 7);
			break;

			case 11 :
			printf("%d MS\n", N - 9);
			break;
		}
	}
	return 0;
}