/*
	program 104
	23.12.23
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
	int i=1,n=5,m=1,j;
	while(i<=6)
	{
		j=1;
		while(j<=n)
		{
			printf(" ");
			j=j+1;
		}
		n=n-1;
		j=1;
		while(j<=m)
		{
			printf("*");
			j=j+1;
		}
		m=m+1;
		i=i+1;
		printf("\n");
	}
	i=1;n=1;m=5;
	while(i<=4)
	{
		j=1;
		while(j<=n)
		{
			printf(" ");
			j=j+1;
		}
		n=n+1;
		j=1;
		while(j<=m)
		{
			printf("*");
			j=j+1;
		}
		m=m-1;
		i=i+1;printf("\n");
	}
}
	
	
