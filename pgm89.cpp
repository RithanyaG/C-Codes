/*
	program 87
	21.12.23
	Arrays- read and display 3*3 matrix
*/
#include <stdio.h>
main()
{
	int a[3][3],i=0,j,sum=0;
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
			sum=sum+a[i][j];
			j=j+1;
		}
		i=i+1;
	}
	printf(" %d ",sum);
}
