/*
	program 143
	31.12.23
	2d Arrays-biggest element of 3x3 matrix
*/
#include <stdio.h>
main()
{
	int a[3][3],i,j,big;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	big=a[0][0];
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			big=a[i][j]>big?a[i][j]:big;
	printf("%d",big);
}
