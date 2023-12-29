/*
	program 98
	22.12.23
	print **......*
	      **......*
	      **......*
	      **......*
	      **......*
*/
#include <stdio.h>
main()
{
	int i=1,n,j;
	scanf("%d",&n);
	while(i<=5)
	{
		j=1;
		while(j<=n)
		{
			printf("*");
			j=j+1;
		}
		printf("\n");
		i=i+1;
	}
}
