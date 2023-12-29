/*
	program 93
	22.12.23
	biggest of each column of a matrix
*/
#include <stdio.h>
main()
{
	int a[3][3],i=0,j,big;
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
	big=a[0][0];
	while(i<3)
	{
		j=0;
		
		while(j<3)
		{
			if(a[j][i]>big)
				big=a[j][i];
			j=j+1;
		}
		printf(" %d ",big);	
		i=i+1;
	}

}
