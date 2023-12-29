/*
	program 102
	22.12.23
	print ----*
	      ---**
	      --***
	      -****
	      *****
*/
#include <stdio.h>
main()
{
	int i=1,n=4,m=1,j;
	while(i<=5)
	{
		j=1;
		while(j<=n)
		{
			printf("-");
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
		printf("\n");
		i=i+1;
	}
}
