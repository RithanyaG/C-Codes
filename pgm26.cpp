/*
	program 26
	14.12.23
	number is even or odd
*/
#include <stdio.h>
main()
{
	int n,r;
	scanf("%d",&n);
	r=n%2;
	if(r==0)
		printf("%d is even",n);
	else
		printf("%d is odd",n);
}

