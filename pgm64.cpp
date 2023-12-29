/*
	program 64
	18.12.23
	print numbers between two limits
*/
#include <stdio.h>
main()
{
	int c,l1,l2;
	scanf("%d%d",&l1,&l2);
	c=l1;
	while(c<=l2)
	{
		printf(" %d ",c);
		c=c+1;
	}
}
