/*
	program 79
	21.12.23
	Arrays- read and display 10 elements
*/
#include <stdio.h>
main()
{
	int a[10],i=0;
	while(i<10)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=0;
	while(i<10)
	{
		printf(" %d ",a[i]);
		i=i+1;
	}
}
