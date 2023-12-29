/*
	program 80
	21.12.23
	Arrays- read and sum 10 elements
*/
#include <stdio.h>
main()
{
	int a[10],i=0,sum=0;
	while(i<10)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=0;
	while(i<10)
	{
		sum=sum+a[i];
		i=i+1;
	}
	printf("%d",sum);
}
