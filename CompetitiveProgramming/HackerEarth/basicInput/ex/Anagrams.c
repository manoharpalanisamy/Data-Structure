#include <stdio.h>
#include <string.h>
int main()
{
	int x, T = 0, len_a, len_b;
	char cstr1[10000], cstr2[10000];
	scanf("%d", &T);
	for(x = 0; x < T; x++)
	{
		int count = 0;
		// printf("Enter the string1 :\n");
		scanf("%s", cstr1);
		// printf("Enter the string2 :\n");
		scanf("%s", cstr2);
		len_a = strlen(cstr1);
		len_b = strlen(cstr2);
		for (int i = 0; i < len_a; i++)
		{
			for (int j = 0; j < len_b; j++)
			{
				if(cstr1[i] == cstr2[j])
				{
					count++;
					cstr2[j] = '0';
					break;
				}	
			}
		}
		count = (len_a + len_b) - (count * 2);
		printf("%d\n", count);
	}
	return 0;
}