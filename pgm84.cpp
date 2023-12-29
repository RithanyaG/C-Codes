/*
	program 84
	21.12.23
	Arrays- read and SWAP the biggest and smallest of 10 elements
*/
#include <stdio.h>
main()
{
	int a[10],i=0,big,index1=0,index2=0,small,temp;
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
	temp=a[index1];
	a[index1]=a[index2];
	a[index2]=temp;
	i=0;
	while(i<10)
	{
		printf("%d",a[i]);
		i=i+1;
	}
}
