/*
	program 149
	31.12.23
	pattern - *
	          **
	          ***
	          ****
	          *****
	          ****
	          ***
	          **
	          *
*/
#include <stdio.h>
main()
{
	int i,n,j;
	for(i=1,n=1;i<=5;i++,n++)
	{
		for(j=1;j<=n;j++)
			printf("*");
		printf("\n");
	}
	for(i=1,n=4;i<=4;i++,n--)
	{
		for(j=1;j<=n;j++)
			printf("*");
		printf("\n");
	}
}
