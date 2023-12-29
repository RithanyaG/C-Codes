/*
	program 95
	22.12.23
	product of 2 matrices
*/
#include <stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i=0,j,k;
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
			k=0;
			c[i][j]=0;
			while(k<3)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
				k=k+1;
			}
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
