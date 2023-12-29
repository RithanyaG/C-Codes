/*
	program 73
	18.12.23
	read and display other than $
*/
#include <stdio.h>
main()
{
	char n;
	scanf("%c",&n);
	while(n!='$')
	{
		printf(" %c ",n);
		scanf("%c",&n);
	}
}
