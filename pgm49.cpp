/*
	program 49
	15.12.23
    digit/not
*/
#include <stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	if(a>=48 && a<=57)
		printf("%c is digit",a);
	else
		printf("%c in not digit",a);
}
