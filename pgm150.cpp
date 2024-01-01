/*
	program 150
	31.12.23
	pattern -      *
	              **
	             ***
	            ****
	          ******
	           *****
	            ****
	             ***
	              **
*/
#include <stdio.h>
main()
{
	int i,j,n,m;
	for(i=1,n=5,m=1;i<=6;i++,n--,m++)
	{
		for(j=1;j<=n;j++)
			printf(" ");
		for(j=1;j<=m;j++)
			printf("*");
		printf("\n");
	}
	for(i=1,n=1,m=5;i<=4;i++,n++,m--)
	{
		for(j=1;j<=n;j++)
			printf(" ");
		for(j=1;j<=m;j++)
			printf("*");
		printf("\n");
	}
}
