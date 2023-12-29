/*
	program 70
	18.12.23
	read numbers other than 1000 and find +ve/-ve/0
*/
#include <stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	while(n!=1000)
	{
		if(n>0)
			printf(" %d is +ve ",n);
		else if(n<0)
				printf(" %d is -ve ",n);
			else 
				printf(" %d is 0 ",n);
		scanf("%d",&n);
	}	
}

