/*
	program 29
	14.12.23
	number is single digit or not
*/
#include <stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	if(n>=0 && n<=9)
		printf("%d is single digit",n);
	else
		printf("%d is not a single digit",n);
}

