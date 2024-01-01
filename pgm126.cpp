/*
	program 126
	30.12.23
	read and display other than $
*/
#include <stdio.h>
main()
{
	char c;
	for(scanf("%c",&c);c!='$';scanf("%c",&c))
		printf("%c",c);
}
