/*
	program 19
	14.12.23
	digits of a 2 digit number
*/
#include <stdio.h>
main()
{
	int a,o,t;
	scanf("%d",&a);
	o=a%10;
	t=a/10;
	printf("%d,%d",t,o);
}

