#include<stdio.h>
int fact (int);
main()
{
	int n,c;
	printf("enter no");
	scanf("%d",&n);
	c=fact(n);
	printf("factorial=%d",c);
}
int fact(int x)
{
	int i,b=1;
	for(i=1;i<=x;i++)
	b=b*i;
	return b;
	
}
