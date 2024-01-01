/*
	program 144
	31.12.23
	2d Arrays-sum of each row of 3x3 matrix
*/
#include <stdio.h>
main()
{
	int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
			sum+=a[i][j];
		printf("%d",sum);}
}
