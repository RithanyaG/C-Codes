/*
	program 31
	14.12.23
	char is upper or not
*/
#include <stdio.h>
main()
{
	char n;
	scanf("%c",&n);
	if(n>='A' && n<='Z')
		printf("%c is upper",n);
	else
		printf("%c is not upper",n);
}

