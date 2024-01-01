/*
	program 140
	31.12.23
	2d Arrays-read and display 3x3 matrix
*/
#include <stdio.h>
main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			printf("%d",a[i][j]);
}
