/*
	program 57
	16.12.23
	word for vowel-switch case (upper & lower)
*/
#include <stdio.h>
main()
{
	char n;
	scanf("%c",&n);
	switch (n)
	{
		case 'A':	
		case 'a':
			printf("Apple");
			break;
		case 'E':
		case 'e':
			printf("Eagle");
			break;
		case 'I':	
		case 'i':
			printf("Ice");
			break;
		case 'O':
		case 'o':
			printf("Orange");
			break;
		case 'U':
		case 'u':
			printf("Use");
			break;
		default:
			printf("Not a vowel");
			break;
	}
}
