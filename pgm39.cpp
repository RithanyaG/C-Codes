/*
	program 39
	15.12.23
	number is even or odd
*/
#include <stdio.h>
main()
{
	int a,x;
	scanf("%d",&a);
	x=a%2;
	if(!x)
		printf("%d id even",a);
	else
		printf("%d is odd",a);
}

