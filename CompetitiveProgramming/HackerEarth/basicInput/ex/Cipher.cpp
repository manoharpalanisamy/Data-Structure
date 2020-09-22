#include <iostream>
#include <string>
using namespace std;
int main()
{
	string S;
	unsigned int N;
	int length, temp;
	cin >> S;
	cin >> N;

	length = S.size(); // strlen instead size() in cpp 
	for (int i = 0; i < length; ++i)
	{
		if((S[i] >= 65) && (S[i] <= 90)){
			S[i] = S[i] + N;
			if (S[i] > 90)
			{
				S[i] = S[i] - 26;
				continue;
			}
		}
		else if((S[i] >= 97) && (S[i] <= 122)){
			S[i] = S[i] + N;
			if (S[i] > 122)
			{
				S[i] = S[i] - 26;
				continue;
			}
		}
		else if((S[i] >= 48) && (S[i] <= 57)){
			S[i] = S[i] + N;
			if (S[i] > 57)
			{
				S[i] = S[i] - 10;
				continue;
			}
		}
	}
	cout << S;
	return 0;
}