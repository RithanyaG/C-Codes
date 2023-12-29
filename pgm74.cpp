/*
	program 74
	18.12.23
	read other than $ and display upper/lower/digit/special
*/
#include <stdio.h>
main()
{
	char c;
	scanf("%c",&c);
	while(c!='$')
	{
		if(c>=65 && c<=90)
			printf(" upper ");
		else if(c>=97 && c<=122)
				printf(" lower ");
			 else if(c>=48 && c<=57)
					printf(" digit ");
				  else
				  	printf(" special ");
		scanf("%c",&c);
	}
}
