#include <iostream>
using namespace std;
int main()
{
	int N, i;
	cin >> N;
	int A[N];
	for (i = 0; i < N; i++) cin >> A[i];
	for (i = 0; i < N; i++) cout << A[i] << " ";
	return 0;
}