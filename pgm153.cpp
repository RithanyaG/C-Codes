/*
	program 153
	31.12.23
	read and display a word
*/
#include <stdio.h>
main()
{
	char a[100];
	int i;
	for(i=0,scanf("%c",&a[i]);a[i]!=' ';i++,scanf("%c",&a[i]))
	{
	}
	a[i]='\0';
	for(i=0;a[i]!='\0';i++)
		printf("%c",a[i]);
}
