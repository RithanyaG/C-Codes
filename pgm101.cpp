/*
	program 101
	22.12.23
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
	int i=1,n=1,j;
	while(i<=5)
	{
		j=1;
		while(j<=n)
		{
			printf("*");
			j=j+1;
		}
		printf("\n");
		n=n+1;
		i=i+1;
	}
	i=1;
	n=4;
	while(i<=4)
	{
		j=1;
		while(j<=n)
		{
			printf("*");
			j=j+1;
		}
		printf("\n");
		n=n-1;
		i=i+1;
	}
}
