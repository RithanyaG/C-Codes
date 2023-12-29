/*
	program 40
	15.12.23
	leap year or not
*/
#include <stdio.h>
main()
{
	int a,x;
	scanf("%d",&a);
	x=a%4;
	if(!x)
		printf("%d is leap",a);
	else
		printf("%d is not leap",a);
}

