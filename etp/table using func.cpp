#include<stdio.h>
void tab(int);
main()
{
	int n;
	printf("enter no");
	scanf("%d",&n);
	tab(n);
}
void tab(int x)
{
	int i;
	for(i=1;i<=10;i++)
	printf("\n%d * %d = %d",x,i,x*i);
}
