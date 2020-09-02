#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	if (N > 0)
	{	
		if((N % 2) == 0)
		{
			if((N % 3) == 0) printf("YES\n");
			else printf("NO\n");	
		}
		else if(((N % 3) == 0) || ((N % 7) == 0) || ((N % 9) == 0)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}