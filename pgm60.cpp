/*
	program 60
	16.12.23
	print 100,120,.....,500
*/
#include <stdio.h>
main()
{
	int c=100;
	while(c<=500)
	{
		printf("%d",c);
		c=c+20;
	}
}
