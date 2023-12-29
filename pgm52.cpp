/*
	program 52
	15.12.23
    lower to upper
*/
#include <stdio.h>
main()
{
	char a,b;
	scanf("%c",&a);
	if(a>=97 && a<=122)
	{
		b=a-32;
		printf("%c is upper",b);}
	else
		printf("already upper");
}
