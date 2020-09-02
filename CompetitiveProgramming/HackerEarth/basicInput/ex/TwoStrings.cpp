#include <stdio.h>
#include <iostream>
using namespace std;

int table_size = 10;
int hashFunction(char*);

int main()
{
	char S1[10000], S2[10000];
	unsigned short int T, bucket_1, bucket_2;
	cin >> T ;
	for (int i = 0; i < T; i++){
		cin >> S1 >> S2;
	}
	bucket_1 = hashFunction(S1);
	bucket_2 = hashFunction(S2);
	if(bucket_1 == bucket_2) printf("YES\n");
	else printf("NO\n");
	return 0;
}
int hashFunction(char S1[10000])
{
	unsigned short int count = 0;
	int hash = 0, i = 0;
	while(S1 != "\0"){
		count++;
		i++;
	}
	for (int i = 0; i < count; i++)
		hash = hash + (int)S1[i];
	return hash % table_size;
}