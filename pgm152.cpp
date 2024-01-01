/*
	program 152
	31.12.23
	pattern -     
	               *
	              ***
	             *****
	            ******* 
				 *****
				  ***
				   *       Pascal's triangle
*/
#include <stdio.h>
main()
{
	int i,j,n,m;
	for(i=1,n=1,m=3;i<=4;i++,n+=2,m--)
	{
		for(j=1;j<=m;j++)
			printf(" ");
		for(j=1;j<=n;j++)
			printf("*");
		printf("\n");
	}
	for(i=1,n=5,m=1;i<=3;i++,n-=2,m++)
	{
		for(j=1;j<=m;j++)
			printf(" ");
		for(j=1;j<=n;j++)
			printf("*");
		printf("\n");
	}	
}
