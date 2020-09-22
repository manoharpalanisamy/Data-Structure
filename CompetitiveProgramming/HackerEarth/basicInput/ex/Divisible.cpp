#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <string>
using namespace std;
void solve (int* B, int N, int half) {

// 15478 8452 8232 874 985 4512
	char cstr[5];
	char tempCstr[6];
	int length, i, j, temp;

	for(i = 0; i < N; i++){
    	printf("B[%d] = %d\n", i, B[i]);
	}
	for (i = 0; i < half; i++)
	{

		sprintf(cstr, "%d", B[i]); // convert int to string using sprintf()
		length = strlen(cstr);
		if(length == 5)
		{
			temp = atoi(cstr);
			tempCstr[i] = (char)(temp / 10000);
		}
		else if(length == 4)
		{
		    temp = atoi(cstr);
			tempCstr[i] = (char)(temp / 1000);
		}
		else if(length == 3)
		{
			temp = atoi(cstr);
			tempCstr[i] = (char)(temp / 100);
		}
		else if(length == 2)
		{
			temp = atoi(cstr);
			tempCstr[i] = (char)(temp / 10);
		}
		else
		{
			temp = atoi(cstr);
			tempCstr[i] = (char)temp;
		}
	}
	
	for (i = half; i < N; i++)
	{
		temp = B[i] % 10;
		sprintf(cstr, "%d", temp);
		tempCstr[i] = atoi(cstr);
	}
	string tempArr = "";
	for(i = 0; i < N; i++){
    	printf("after tempCstr = %d\n", tempCstr[i]);
    	tempArr = tempArr + tempCstr[i];
    	// printf("tempArr[%d] = %d\n", i, tempArr[i]);
	}

	printf("tempArr = %s\n", tempArr);
	printf("cstr = %d\n", strlen(cstr));
	temp = atoi(tempCstr);
	printf("final temp = %d\n", temp);
	((temp % 11) == 0) ? printf("OUI") : printf("NON"); 

}

int main() {
    int N, i, *A;
    scanf("%d", &N);

    A = (int*) malloc (N * sizeof(int)); // base address with N bytes

    for(i = 0; i < N; i++){
    	scanf("%d", &A[i]);
	}
 //    for(i = 0; i < N; i++){
 //    	printf("A[%d] = %d\n", i, A[i]);
	// }
    
    solve(A, N, N/2);    	
}