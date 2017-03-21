#include<stdio.h>
void table(int);
main()
{
	int n;
	printf("enter no");
	scanf("%d",&n);
	table(n);
}
void table(int x)
{
	int i,c=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		c++;
	}
	if(c==2)
	printf("prime");
	else
	printf("not prime");
}
