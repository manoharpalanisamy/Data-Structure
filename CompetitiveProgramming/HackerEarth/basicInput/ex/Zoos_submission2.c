#include <stdio.h>
int main()
{
	int x=0,y=0,i;
	char str[20];
	scanf("%s", str);
	
    for(i=0;i<20;i++)
        (str[i]=='z') ? x++ : (str[i]=='o') ? y++ : i; 

(y == (2*x)) ? printf("Yes") : printf("No");
return 0;
}