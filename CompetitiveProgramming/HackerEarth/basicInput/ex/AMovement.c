#include <stdio.h>
int main()
{
	unsigned long int n;
	int m_n, d_n;
	scanf("%d" , &n);
	if (n > 0)
	 {
	 	m_n = n % 5;
	 	d_n = n / 5;
	 	if ((m_n < 5) && (m_n != 0) && (d_n != 0)) printf("%d\n", d_n + 1);
	 	else if((d_n == 0)) printf("%d\n", m_n);
	 	else printf("%d\n", d_n);
	 } 
	return 0;
}