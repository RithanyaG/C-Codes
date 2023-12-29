/*
	program 30
	14.12.23
	number is single digit or double/triple/4 digit
*/
#include <stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	if(n>=0 && n<=9)
		printf("%d is single digit",n);
	else if(n>=10 && n<=99)
			printf("%d is a double digit",n);
		else if(n>=100 && n<=999)
				printf("%d is a triple digit",n);
		   	else
		   		printf("%d is 4 digit",n);
}

