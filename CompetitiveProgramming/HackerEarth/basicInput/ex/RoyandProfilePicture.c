#include <stdio.h>
int main()
{
	short unsigned int L, W, H, N;
	scanf("%hu", &L);
	scanf("%hu", &N);
	while(N--)
	{
		scanf("%hu %hu", &W, &H);	
		
		if(W < L || H < L) 
			printf("UPLOAD ANOTHER\n");
		else if((W == L && H == L) || W == H) // a) if the photo is 'ALREADY SQUARE' then it is accepted. Print "ACCEPTED" in this case. W == H
			printf("ACCEPTED\n");
		else
			printf("CROP IT\n"); 
	}
	return 0;
}