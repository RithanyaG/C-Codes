/*
	program 127
	30.12.23
	read other than $, find upper/lower/digit/special
*/
#include <stdio.h>
main()
{
	char c;
	for(scanf("%c",&c);c!='$';scanf("%c",&c))
	{
		if(c>=65 && c<=90)
			printf("upper");
		else if(c>=97 && c<=122)
				printf("lower");
			 else if(c>=48 && c<=57)
					printf("digit");
				  else
				  	printf("special");
	}
}
