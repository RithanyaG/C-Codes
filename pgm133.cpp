/*
	program 133
	30.12.23
	Arrays-read and sum 10 numbers
*/
#include <stdio.h>
main()
{
	int a[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		sum+=a[i];
	}
	printf("%d",sum);
}
