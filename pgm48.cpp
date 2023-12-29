/*
	program 48
	15.12.23
    lower/not
*/
#include <stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	if(a>=97 && a<=122)
		printf("%c is lower",a);
	else
		printf("%c in not not lower",a);
}
