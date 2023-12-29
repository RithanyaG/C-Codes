/*
	program 77
	21.12.23
	read and sum 10 numbers
*/
#include <stdio.h>
main()
{
	int c=1,n,sum=0;
	while(c<=10)
	{
		scanf("%d",&n);
		sum=sum+n;
		c=c+1;
	}
	printf(" %d ",sum);
}
