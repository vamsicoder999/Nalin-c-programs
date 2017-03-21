#include<stdio.h>
#include<string.h>
main()
{
	char a[8],b[9];
	int i,length;
	printf("enter any string:\n");
	gets(a);
	length=strlen(a)-1;
	for(i=0;a[i]!='\0';i++)
	{
		b[length]=a[i];
		length--;
	}
	b[i]='\0';
	printf("\n the rev of string is:\n");
	puts(b);
}
