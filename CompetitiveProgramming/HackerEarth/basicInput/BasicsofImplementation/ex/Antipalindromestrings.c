#include <stdio.h>
#include <string.h>
int main()
{
	char S[200000], tempS;
	int i = 0, len = 0;
	unsigned short int T;
	scanf("%hd", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%s", S);
		len = strlen(S);
		tempS = S[len -1];
		
		if(S[0] == tempS) printf("-1");
		else 
		{

		}
	}

	return 0;
}