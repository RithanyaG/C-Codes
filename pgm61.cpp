/*
	program 61
	16.12.23
	print 500,450,....0
*/
#include <stdio.h>
main()
{
	int c=500;
	while(c>=0)
	{
		printf("%d",c);
		c=c-50;
	}
}
