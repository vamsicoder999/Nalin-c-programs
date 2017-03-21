#include<stdio.h>
void s (int[]);
main()
{
	int a[]={1,2,3,4,5};
	s(a);	
}
void s (int b[])
{
	int i;
	for(i=0;i<=4;i++)
	printf("\n %d",b[i]);
}
