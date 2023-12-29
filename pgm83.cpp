/*
	program 83
	21.12.23
	Arrays- read and find index of the biggest and smallest of 10 elements
*/
#include <stdio.h>
main()
{
	int a[10],i=0,big,index1=0,index2=0,small;
	while(i<10)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=1;
	big=a[0];
	small=a[0];
	while(i<10)
	{
		if(a[i]>big)
		{
			big=a[i];
			index1=i;
		}
		if(a[i]<small)
		{
			small=a[i];
			index2=i;
		}
		i=i+1;
	}
	printf("- %d %d -",index1,index2);
}
