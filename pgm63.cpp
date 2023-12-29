/*
	program 63
	18.12.23
	leap year/not 1000 to 3000
*/
#include <stdio.h>
main()
{
	int c=1000,n;
	while(c<=3000)
	{
		n=c%4;
		if(n==0)
			printf(" leap ");
		else
			printf(" not leap ");
		c=c+1;
	}
}
