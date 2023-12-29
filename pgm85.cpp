/*
	program 85
	21.12.23
	Arrays- read and find the SECOND biggest of 10 elements
*/
#include <stdio.h>
main()
{
	int a[10],i=0,big,index=0,second;
	while(i<10)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=1;big=a[0];
	while(i<10)
	{
		if(a[i]>big)
		{
			big=a[i];
			index=i;
		}
		i=i+1;
	}
	i=1;
	second=a[0];
	while(i<10)
	{
		if(a[i]>second && i!=index)
			second=a[i];
		i=i+1;
	}
	printf("%d",second);
}
