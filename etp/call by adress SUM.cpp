#include<stdio.h>
void sum(int*,int*);
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	sum(&a,&b);
}
void sum(int *x,int *y)
{
	int p,q,z;
	z=*x+*y;
	printf("%d",z);
}
