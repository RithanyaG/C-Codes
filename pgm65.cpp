/*
	program 65
	18.12.23
	even numbers count between two limits
*/
#include <stdio.h>
main()
{
	int c,l1,l2,count=0,n;
	scanf("%d%d",&l1,&l2);
	c=l1;
	while(c<=l2)
	{
		n=c%2;
		if(n==0)
			count=count+1;
		c=c+1;
	}
	printf("%d",count);
}
