#include<stdio.h>
#include<string.h>
main()
{
	char s[8];
	printf("enter string");
	gets(s);
	int l=strlen(s);
	printf("length is %d",l);
}
