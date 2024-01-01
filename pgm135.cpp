/*
	program 135
	30.12.23
	Arrays-index of biggest 10 numbers
*/
#include <stdio.h>
main()
{
	int a[10],i,big,index=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	big=a[0];
	for(i=0;i<10;i++)
	{
		index=a[i]>a[index]?i:index;
	}
	printf("%d",index);
}
