/*
	program 125
	30.12.23
	sum of +ve nums and sum of -ve nums
*/
#include <stdio.h>
main()
{
	int n,c1=0,c2=0;
	for(scanf("%d",&n);n!=1000;scanf("%d",&n))
	{	
		if(n>0)
			c1++;
		else 
			c2++;
	}
	printf("%d,%d",c1,c2);
}
