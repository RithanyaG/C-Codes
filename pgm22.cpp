/*
	program 22
	14.12.23
	print reverse of a number
*/
#include <stdio.h>
main()
{
	int a,o,x,t,h,rev;
	scanf("%d",&a);
	o=a%10;
	x=a/10;
	t=x%10;
	h=x/10;
	rev=o*100+t*10+h*1;
	printf("%d",rev);
}
