/*
	program 130
	30.12.23
	read and sum 10 numbers
*/
#include <stdio.h>
main()
{
	int n,i,sum=0;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&n);
	  	sum+=n;
	}
	printf("%d",sum);
}
