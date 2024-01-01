/*
	program 134
	30.12.23
	Arrays-biggest 10 numbers
*/
#include <stdio.h>
main()
{
	int a[10],i,big=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	big=a[0];
	for(i=0;i<10;i++)
	{
		big=a[i]>big?a[i]:big;
	}
	printf("%d",big);
}
