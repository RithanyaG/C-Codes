/*
	program 99
	22.12.23
	print *
	      **
	      ***
	      ****
	      *****
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
}
