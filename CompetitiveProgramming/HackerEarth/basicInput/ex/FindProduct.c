// https://www.quora.com/How-do-I-take-the-input-of-a-line-of-integers-separated-by-a-space-in-C
// LOGICS FOUND IN https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/
// Format specifer long int "%ld" to be specified instead of decimal int "%d"
#include <stdio.h>
int powerFunction(int value, int power)
{
	long int mul = 1;
	for (int i = 0; i < power; i++)
		mul = mul * value;
	return mul;
}
int main()
{
	long int N, power, Answer = 1;
	scanf("%d", &N);
	int A[N], i;
	for (i = 0; i < N; i++) scanf("%ld", &A[i]);
	power = powerFunction(10, 9);
	for (i = 0; i < N; i++) Answer = (Answer * A[i]) % (power + 7);	
	printf("%ld\n", Answer);
	return 0;
}
