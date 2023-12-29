/*
	program 50
	15.12.23
    upper/lower/digit/special
*/
#include <stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	if(a>=65 && a<=90)
		printf("%c is upper",a);
	else if(a>=97 && a<=122)
			printf("%c in lower",a);
		else if(a>=48 && a<=57)
				printf("%c is digit",a);
			 else
			 	printf("%c is special",a);
}
