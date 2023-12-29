/*
	program 91
	22.12.23
	Sum of each element of row of a matrix
*/
#include <stdio.h>
main()
{
	int a[3][3],i=0,j,sum;
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
		sum=0;
		while(j<3)
		{
			sum=sum+a[i][j];
			j=j+1;
		}
		printf(" %d ",sum);
		i=i+1;
	}	
}
