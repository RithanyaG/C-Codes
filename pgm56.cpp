/*
	program 56
	16.12.23
	word for vowel-switch case
*/
#include <stdio.h>
main()
{
	char n;
	scanf("%c",&n);
	switch (n)
	{	
		case 'a':
			printf("Apple");
			break;
		case 'e':
			printf("Eagle");
			break;	
		case 'i':
			printf("Ice");
			break;
		case 'o':
			printf("Orange");
			break;
		case 'u':
			printf("Use");
			break;
		default:
			printf("Not a vowel");
			break;
	}
}
