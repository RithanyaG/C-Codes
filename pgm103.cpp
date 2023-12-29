/*
	program 103
	23.12.23
	print *******
	      -******
	      --*****
	      ---****
	      ----***
	      -----**
	      ------*
*/
#include <stdio.h>
main()
{
	int i=1,n=7,m=0,j;
	while(i<=7)
	{
		j=1;
		while(j<=m)
		{
			printf("-");
			j=j+1;
		}
		m=m+1;
		j=1;
		while(j<=n)
		{
			printf("*");
			j=j+1;
		}
		n=n-1;
		printf("\n");
		i=i+1;
	}
}
