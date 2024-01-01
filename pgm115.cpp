/*
	program 115
	30.12.23
	even/odd
*/
#include <stdio.h>
main()
{
	int c;
	for(c=1;c<=100;c++)
	{	
		if(c%2 == 0)
			printf("%d is even",c);
		else
			printf("%d is odd",c);

	}
	
}
