#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
	char digits[8], tag[9];
	bool letter_flag = false;
	unsigned short int digit_flag = 0, i = 0, j = 0, length = 0;
	scanf("%s", tag);
	// printf("length = %d\n", strlen(tag));
	length = strlen(tag);
	for (i = 0; i < length; i++)
	{
		if ((tag[i] >= 49) && (tag[i] <= 57)) {
			digits[j] = tag[i];
			j++;
		}
		else if((tag[i] == 65) || (tag[i] == 69) || (tag[i] == 73) || (tag[i] == 79) || (tag[i] == 85) || (tag[i] == 89)){

			letter_flag = true;
			continue;
		} 	
	}
	// printf("length = %d\n", strlen(digits));
	// printf("digits = %s\n", digits);
	// printf("letter = %d\n", letter_flag);

	length = strlen(digits); // reset length
	for (i = 0; i < length; i++)
	{
		if ((length - 1) == i) break; // exit condition once it reaches last index
		else if((digits[i] + digits[i + 1]) % 2 == 0) digit_flag++;
		else continue;
	}
	// printf("digit_flag = %d\n", digit_flag);
	((digit_flag != 0) && (digit_flag % 6 == 0) && (letter_flag == true)) ? printf("valid") : printf("invalid");
	return 0;
}