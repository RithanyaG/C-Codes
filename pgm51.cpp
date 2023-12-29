/*
	program 51
	15.12.23
    upper to lower
*/
#include <stdio.h>
main()
{
	char a,b;
	scanf("%c",&a);
	if(a>=65 && a<=90)
	{
		b=a+32;
		printf("%c is lower",b);}
	else
		printf("already lower");
}
