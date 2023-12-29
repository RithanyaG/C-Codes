/*
	program 28
	14.12.23
	palindrome or not
*/
#include <stdio.h>
main()
{
	int n,o,t,h,rev;
	scanf("%d",&n);
	o=n%10;
	x=n/10;
	t=x%10;
	h=x/10;
	rev=o*100+t*10+h*1;
	if(rev==n)
		printf("%d is a palindrome",n);
	else
		printf("%d is not a palindrome",n);
}

