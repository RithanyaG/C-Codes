/*
	program 71
	18.12.23
	read numbers other than 1000 and find count of +ve/-ve/0
*/
#include <stdio.h>
main()
{
	int n,c1=0,c2=0,c3=0;
	scanf("%d",&n);
	while(n!=1000)
	{
		if(n>0)
			c1=c1+1;
		else if(n<0)
				c2=c2+1;
			else 
				c3=c3+1;
		scanf("%d",&n);
	}
	printf(" %d %d %d",c1,c2,c3);	
}

