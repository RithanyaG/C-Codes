/*
	program 21
	14.12.23
	digits of a 3 digit number
*/
#include <stdio.h>
main()
{
	int a,o,t,h,x;
	scanf("%d",&a);
	o=a%10;
	x=a/10;
	t=x%10;
	h=x/10;
	printf("%d,%d,%d",h,t,o);
}

