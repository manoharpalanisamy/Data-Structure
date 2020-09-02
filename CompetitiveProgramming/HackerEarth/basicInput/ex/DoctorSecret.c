#include <stdio.h>
int main()
{
	int length, pages;
	scanf("%d %d", &length, &pages);
	((length <= 23) && (pages >= 500) && (pages <= 1000)) ? printf("Take Medicine\n") : printf("Don't take Medicine\n");
	return 0;
}


