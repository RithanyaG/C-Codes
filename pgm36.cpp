/*
	program 36
	15.12.23
	number is even or odd
*/
#include <stdio.h>
main()
{
	int a,x;
	scanf("%d",&a);
	x=a%2;
	if(x)
		printf("%d id odd",a);
	else
		printf("%d is even",a);
}

