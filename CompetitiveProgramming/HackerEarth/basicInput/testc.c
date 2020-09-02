// Write your code here
#include <stdio.h>
int main(){
	int num;
	char text[15];
	scanf("%d", &num);              			// Reading input from STDIN
	scanf("%s", text);
	printf("%d\n", num*2);       // Writing output to STDOUT
	printf("%s", text);
}