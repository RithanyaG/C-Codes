/*
	program 25
	14.12.23
	number is +ve or -ve or 0
*/
#include <stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	if(n==0)
		printf("%d is 0",n);
	else if(n>0)
			printf("%d is +ve",n);
		else
			printf("%d is -ve",n);

}

