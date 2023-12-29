/*
	program 47
	15.12.23
    upper/not
*/
#include <stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	if(a>=65 && a<=90)
		printf("%c is upper",a);
	else
		printf("%c in not upper",a);
}
