/*
	program 124
	30.12.23
	read and find count of +/-/digit/special of numbers other than 1000
*/
#include <stdio.h>
main()
{
	int n,c1=0,c2=0,c3=0;
	for(scanf("%d",&n);n!=1000;scanf("%d",&n))
	{	
		if(n>0)
			c1++;
		else if(n<0)
			c2++;
			else
				c3++;
	}
	printf("%d,%d,%d",c1,c2,c3);
}
