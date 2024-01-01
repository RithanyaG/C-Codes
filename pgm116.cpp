/*
	program 116
	30.12.23
	leap/not
*/
#include <stdio.h>
main()
{
	int c;
	for(c=1000;c<=3000;c++)
	{	
		if(c%4 == 0)
			printf("%d is leap",c);
		else
			printf("%d is not leap",c);

	}
	
}
