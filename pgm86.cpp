/*
	program 86
	21.12.23
	Arrays- SWAP 2nd biggest and 2nd smallest
*/
#include <stdio.h>
main()
{
	int a[10],i=0,big,big2,index1=0,index2=0,small,small2,index3=0,index4=0,temp;
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
	
	i=1;
	big2=a[0];
	small2=1000;
	while(i<10)
	{
		if(a[i]>big2 && i!=index1)
		{
			big2=a[i];
			index3=i;
		}
		if(a[i]<small2 && i!=index2)
		{
			small2=a[i];
			index4=i;
		}
		i=i+1;
	}
	
	
	temp=a[index3];
	a[index3]=a[index4];
	a[index4]=temp;
	printf(" [%d,%d,%d,%d] ",index1,index2,index3,index4);
	i=0;
	while(i<10)
	{
		printf(" %d ",a[i]);
		i=i+1;
	}
}
