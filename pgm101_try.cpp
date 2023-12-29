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
	while(i<=9)
	{
		//printf("[%d,%d]",i,n);
		j=1;
		while(j<=n)
		{
			printf("*");
			j=j+1;
		}
		printf("\n");
		if(i<5)
			n=n+1;
		else 
			n=n-1;
		i=i+1;
	}
}
