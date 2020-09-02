#include <stdio.h>
int main()
{
	unsigned int N = 0, Q = 0, L = 0, R = 0, i, j, mean = 0, count = 0;
	scanf("%d %d", &N, &Q);
	int Arr[N];
	for (i = 0; i < N; i++) scanf("%d ", &Arr[i]);
	for (i = 0; i < Q; i++)
	{
		scanf("%d %d", &L, &R);
		for (j = 0; j < N; j++)
		{
			if (Arr[j] == L)
			{
				count = 0;   // reset count for next sub array count  added by manohar
				mean = 0;    // reset mean  for next sub array mean
				while(Arr[j] != R)
				{
					count++;
					mean = mean + Arr[j];
					j++;
				}
				count++;
				mean = mean + Arr[j];
				break;
			}
		}
		printf("%d\n", (int)(mean/count));
	}
	return 0;
}