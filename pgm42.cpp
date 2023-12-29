/*
	program 42
	15.12.23
	smallest of 2 numbers
*/
#include <stdio.h>
main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a<b?a:b;
	printf("%d is the smallest",c);
}

