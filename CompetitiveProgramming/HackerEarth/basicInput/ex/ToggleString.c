#include <stdio.h>
int len(char cStr[])
{	
	int i = 0, length = 0;
	while(cStr[i] != '\0')
	{	
		length++;
		i++;
	}
	return length;
}
int main()
{
	int length = 0;
	char S[100];
	scanf("%s", S);
	length = len(S);
	for (int i = 0; i < length; i++)
	{
		if(S[i] >= 97) S[i] = S[i] - 32;
		else S[i] = S[i] + 32;
	}
	printf("%s\n", S);
	return 0;
}