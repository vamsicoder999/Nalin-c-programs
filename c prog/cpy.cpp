
#include<stdio.h>
#include<string.h>
main() 
{
char s[15],d[15];
int i=0;
printf("enter first string \t");
gets(s);
while(s[i]!='\0')
	{
	d[i]=s[i];
	i++;
}
d[i]='\0';
printf("\ncopied string is %s\n",d);
}
