/*
	program 138
	31.12.23
	Arrays-second biggest 10 numbers
*/
#include <stdio.h>
main()
{
	int a[10],i,p1=0,p2=0;
	for(i=0;i<10;i++)	
		scanf("%d",&a[i]);
	
	for(i=0;i<10;i++)
		p1=a[i]>a[p1]?i:p1;
	
	for(i=0;i<10;i++)
		p2=a[i]>a[p2]&&i!=p1?i:p2;
	printf("%d",p2);
}
