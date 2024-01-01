/*
	program 147
	31.12.23
	2d Arrays-product of two 3x3 matrix
*/
#include <stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			for(k=0;k<3;k++)
				c[i][j]+=a[i][k]*b[k][j];
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			printf("%d",c[i][j]);
}
