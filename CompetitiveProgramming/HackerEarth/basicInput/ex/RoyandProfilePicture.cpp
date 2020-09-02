#include <iostream>
using namespace std;
int main()
{
	int L, W, H;
	short int N;
	std::cin >> L;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> W >> H;
		if(W < L || H < L) 
			cout << "UPLOAD ANOTHER\n";
		else if(W > L || H > L)
			cout << "CROP IT\n";
		else
			cout << "ACCEPTED\n"; 
	}
	return 0;
}