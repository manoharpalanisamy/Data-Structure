#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	char S[100];
	int i, weights = 0, length;
	scanf("%s", S);
	length = strlen(S);
	for (i = 0; i < length; i++)
		weights = weights + abs(97 - S[i]) + 1;
	printf("%d\n", weights);
	return 0;
}