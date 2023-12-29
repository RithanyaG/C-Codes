/*
	program 33
	14.12.23
	char is vowel or not
*/
#include <stdio.h>
main()
{
	char n;
	scanf("%c",&n);
	if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u')
		printf("%c is vowel",n);
	else
		printf("%c is not a vowel",n);
}

