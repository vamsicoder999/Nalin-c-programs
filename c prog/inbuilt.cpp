#include<stdio.h>
#include<string.h>
int main()
{
	char a[8]="asdf",b[9]="askg";
	printf("%d\n",strncmp(a,b,3));
	puts(strncat(a,b,3));
	
}
