#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char digits[10], tag[10], letter;
	int digit_flag = 0, letter_flag = 0, i = 0;
	cout << "Enter the tag" << endl;
	cin >> tag;
	// printf("length = %d\n", strlen(tag));
	for (i = 0; i < strlen(tag); i++)
	{
		// printf("%c", i);
		if ((tag[i] >= 49) && (tag[i] <= 57)){
			// printf("%c", tag[i]);
			digits[i] = tag[i];
		}

	}
	cout << "length = " << strlen(digits) << endl;
	cout << "digits = " << digits << endl;
	return 0;
}