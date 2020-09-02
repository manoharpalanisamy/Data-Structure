#include <stdio.h>
#include <string.h>
int main()
{
	char ISBN[10];
	unsigned short int i, length = 0, sum = 0;
	scanf("%s", ISBN);
	length = strlen(ISBN);
	for (i = 0; i < length; i++)
	{
		if ((ISBN[i] >= 48) && (ISBN[i] <= 57))  sum = sum + ((i+1) * (int)ISBN[i]);
		else break;
	}
	((sum % 11) == 0) ? printf("Legal ISBN\n") : printf("Illegal ISBN\n");
	return 0;
}
