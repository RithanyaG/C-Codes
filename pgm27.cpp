/*
	program 27
	14.12.23
	year is leap or not
*/
#include <stdio.h>
main()
{
	int n,r;
	scanf("%d",&n);
	r=n%4;
	if(r==0)
		printf("%d is leap",n);
	else
		printf("%d is not leap",n);
}

