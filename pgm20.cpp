/*
	program 20
	14.12.23
	sum and product of digits of a 2 digit number
*/
#include <stdio.h>
main()
{
	int a,o,t,sum,pdt;
	scanf("%d",&a);
	o=a%10;
	t=a/10;
	sum=o+t;
	pdt=o*t;
	printf("%d,%d",sum,pdt);
}

