/*
	program 137
	31.12.23
	Arrays-swap biggest and smallest of 10 numbers
*/
#include <stdio.h>
main()
{
	int a[10],i,index1=0,index2=0,temp;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		index1=a[i]>a[index1]?i:index1;
		index2=a[i]<a[index2]?i:index2;
	}
	temp=a[index1];
	a[index1]=a[index2];
	a[index2]=temp;
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	
}
