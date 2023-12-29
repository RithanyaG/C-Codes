/*
	program 44
	15.12.23
	biggest of 3 numbers-nested
	*/
#include <stdio.h>
main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=a>b?(a>c?a:c):(b>c?b:c);
	printf("%d is the biggest",d);
}

