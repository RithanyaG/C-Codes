/*
	program 66
	18.12.23
	non-leap year count between two limits
*/
#include <stdio.h>
main()
{
	int c,l1,l2,count=0,n;
	scanf("%d%d",&l1,&l2);
	c=l1;
	while(c<=l2)
	{
		n=c%4;
		if(n!=0)
			count=count+1;
			printf("%d\n",c);
		c=c+1;
	}
	printf("%d",count);
}
