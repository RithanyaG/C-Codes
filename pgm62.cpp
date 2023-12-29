/*
	program 62
	18.12.23
	even/odd 1 to 100
*/
#include <stdio.h>
main()
{
	int c=1,n;
	while(c<=100)
	{
		n=c%2;
		if(n==0)
			printf(" even ");
		else
			printf(" odd ");
		c=c+1;
	}
}
