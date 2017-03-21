#include<stdio.h>
void s (int[]);
main()
{
	int a[3];
	printf("enter nos");
	s(a);	
}
void s (int b[])
{
	int i;
	for(i=0;i<2;i++)
	printf("\n %d",b[i]);
}
