/*
	program 32
	14.12.23
	number is upper/lower/digit/special
*/
#include <stdio.h>
main()
{
	char n;
	scanf("%c",&n);
	if(n>='A' && n<='Z')
		printf("%c is upper",n);
	else if(n>='a' && n<=9'z')
			printf("%c lower",n);
		else if(n>='0' && n<='9')
				printf("%c is a digit",n);
		   	else
		   		printf("%c is special",n);
}

