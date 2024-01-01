/*
	program 154
	31.12.23
	read and display a sentence
*/
#include <stdio.h>
main()
{
	char a[100];
	int i;
	for(i=0,a[i]=getchar();a[i]!='.';i++,a[i]=getchar())
	{
	}
	a[i]='\0';
	for(i=0;a[i]!='\0';i++)
		putchar(a[i]);
}
