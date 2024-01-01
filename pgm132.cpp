/*
	program 132
	30.12.23
	Arrays-read and display 10 numbers
*/
#include <stdio.h>
main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
}
