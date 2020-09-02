#include <stdio.h>
// #include <string.h>
int main()
{
	char str[20];
	int idx = 0, length = 0, countZ = 0, countO = 0, temp = 0;
	// printf("Enter String :\n");
	scanf("%s", str);
	// length of the string
	// length = strlen(str);
	while(str[idx] != '\0')
	{
		length++;
		idx++;
	}
	// printf("length = %d", length);
	idx = 0; // reset index = 3
	if (length == 3 || length == 6 || length == 9 || length == 12 || length == 15 || length == 18)
	{
		while(str[idx] == 'z')
		{
			countZ++;
			idx++;
		}
		temp = countZ * 2;
		while(temp)
		{	
			if ((length - temp) > 0) // test case : zzo
			{
				if(str[length - temp] == 'o')
				{
					countO++;
					--temp;
				}
			}
			else
				break;
		}
		countZ = countZ + countO;
		(countZ == length) ? printf("\nYes") : printf("\nNo");
	}	
	else
		printf("\nNo");
	return 0;
}