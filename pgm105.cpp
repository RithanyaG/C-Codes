/*
	program 105
	23.12.23
	pattern -     
	               *
	              ***
	             *****
	            *******  Pascal's triangle
*/
#include <stdio.h>
main()
{
	int i=1,n=1,m=3,j;
	while(i<=4)
	{
		j=1;
		while(j<=m)
		{
			printf(" ");
			j=j+1;
		}
		m=m-1;
		j=1;
		while(j<=n)
		{
			printf("*");
			j=j+1;
		}
		n=n+2;
		i=i+1;
		printf("\n");
	}
}
