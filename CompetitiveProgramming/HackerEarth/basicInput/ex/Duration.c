#include <stdio.h>
#include <math.h>
int main()
{
	unsigned short int i, SH, SM, EH, EM, HH, MM, N = 0;
	scanf("%hd", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%hd %hd %hd %hd", &SH, &SM, &EH, &EM);
		((EM - SM) < 0) ? printf("%hd %hd\n", ((EH - SH) - 1), (60 - abs(EM - SM))) : (EM - SM) > 0 ? printf("%hd %hd\n", (EH - SH) , (EM - SM)) : printf("*");
		// else if((EM - SM) > 0)
		// 	MM = (EM - SM)
		// 	HH = (EH - SH) + 1
		// 	printf("%hd %hd\n", HH,MM);

	}
	return 0;
}
