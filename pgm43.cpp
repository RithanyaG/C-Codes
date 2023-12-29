/*
	program 43
	15.12.23
	biggest of 3 numbers
	*/
#include <stdio.h>
main()
{
	int a,b,c,d,e;
	scanf("%d%d%d",&a,&b,&c);
	d=a>b?a:b;
	e=c>d?c:d;
	printf("%d is the biggest",e);
}

