/*
	program 58
	16.12.23
	arithmetic operator or not-switch case
*/
#include <stdio.h>
main()
{
	char n;
	scanf("%c",&n);
	switch (n)
	{	
		case '+':
		case '-':	
		case '*':
		case '/':
		case '%':
			printf("Arithmetic operator");
			break;
		default:
			printf("Not arithmetic");
			break;
	}
}
