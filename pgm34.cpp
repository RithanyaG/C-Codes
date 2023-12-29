/*
	program 34
	14.12.23
	char is arithmetic operator or not
*/
#include <stdio.h>
main()
{
	char n;
	scanf("%c",&n);
	if(n=='+' || n=='-' || n=='/' || n=='*' || n=='%')
		printf("%c is arithmetic operator",n);
	else
		printf("%c is not a arithmetic operator",n);
}

