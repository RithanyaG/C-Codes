/*
	program 94
	22.12.23
	Sum of 2 matrices
*/
#include <stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i=0,j;
	while(i<3)
	{
		j=0;
		while(j<3)
		{
			scanf("%d",&a[i][j]);
			j=j+1;
		}
		i=i+1;
	}
	i=0;
	while(i<3)
	{
		j=0;
		while(j<3)
		{
			scanf("%d",&b[i][j]);
			j=j+1;
		}
		i=i+1;
	}
	i=0;
	while(i<3)
	{
		j=0;
		
		while(j<3)
		{
			c[i][j]=b[i][j]+a[i][j];
			j=j+1;
		}
	
		i=i+1;
	}	
	i=0;
	while(i<3)
	{
		j=0;
		while(j<3)
		{
			printf(" %d ",c[i][j]);
			j=j+1;
		}
		i=i+1;
	}
}
