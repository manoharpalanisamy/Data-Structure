#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
	char S[100], tempS[100];
	int len = 0;
	bool status = false;
	gets(S);
	len = strlen(S);
	for (int i = len-1, j = 0; i >= 0; i--, j++) tempS[j] = S[i];
	for (int i = 0; i < len; i++) 
		if(S[i] == tempS[i]) status = true ;
		else status = false;	 
	(status == true) ?  printf("YES") : printf("NO"); 
	return 0;
}