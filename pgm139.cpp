/*
	program 139
	31.12.23
	Arrays-swap second biggest and second smallest of 10 numbers
*/
#include <stdio.h>
main()
{
	int a[10],i,p1=0,p2=0,p3=0,p4=0;
	for(i=0;i<10;i++)	
		scanf("%d",&a[i]);
	
	for(i=0;i<10;i++)
	{	p1=a[i]>a[p1]?i:p1;
		p2=a[i]>a[p2]?i:p2;	}
	for(i=0;i<10;i++)
	{	p3=a[i]>a[p3]&&i!=p1?i:p3;
		p4=a[i]>a[p4]&&i!=p2?i:p4;}
	temp=a[p3];
	a[p3]=a[p4];
	a[p4]=temp;
	
	for(i=0;i<10;i++)
		printf("%d",a[i]);
}
