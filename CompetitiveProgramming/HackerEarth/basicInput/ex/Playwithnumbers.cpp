#include <iostream>
using namespace std;
int main()
{
	unsigned int N = 0, Q = 0, L = 0, R = 0, i, j, mean = 0, count = 0;
	cin >> N >> Q;
	int Arr[N];
	for (i = 0; i < N; i++){
		cin >> Arr[i];
	}
	// for (i = 0; i < N; i++){
	// 	printf("Arr[%d] = %d\n", i, Arr[i]);
	// }
	for (i = 0; i < Q; i++)
	{
		cin >> L >> R;
		for (j = 0; j < N; j++)
		{
			if (Arr[j] == L)
			{
				count = 0;
				mean = 0;
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
		cout << (mean/count) << endl;
	}
	return 0;
}