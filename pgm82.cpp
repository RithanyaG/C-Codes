/*
	program 82
	21.12.23
	Arrays- read and find index of the biggest of 10 elements
*/
#include <stdio.h>
main()
{
	int a[10],i=0,big,index=0;
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
	printf("%d",index);
}
