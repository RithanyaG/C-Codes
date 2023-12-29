/*
	program 107
	23.12.23
	pattern -     
	                *
	               * *
	              *   *
	             *     * 
				*********    hollow Pascal's triangle
*/
#include <stdio.h>
main()
{
	int i=1,n=4,m=0,j;
	while(i<=4)
	{
		j=1;
		while(j<=n)
		{
			printf("-");
			j=j+1;
		}
		n=n-1;
		j=1;
		printf("*");
		while(j<=m)
		{
			printf(" ");
			j=j+1;
		}
		printf("*");
		m=m+2;
		i=i+1;
		printf("\n");
	}
	i=1;
	while(i<=9)
	{
		printf("*");		
		i=i+1;		
	}
}
