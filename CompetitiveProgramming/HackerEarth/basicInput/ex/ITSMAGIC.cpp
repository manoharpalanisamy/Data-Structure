#include <iostream>
using namespace std;
int main()
{
	int A[10000], N;
	printf("Enter the size:\n");
	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 0; i < N; i++){
	 if (A[i] % 7 == 0)
	 {
	 	if(A[i]/7 == 1)
	 		cout << i;
	 }
	}
	return 0;
}