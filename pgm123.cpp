/*
	program 123
	30.12.23
	read and find +/-/digit/special of numbers other than 1000
*/
#include <stdio.h>
main()
{
	int n;
	for(scanf("%d",&n);n!=1000;scanf("%d",&n))
	{	
		if(n>0)
			printf("+ve");
		else if(n<0)
			printf("-ve");
			else
				printf("0");
	}
}
