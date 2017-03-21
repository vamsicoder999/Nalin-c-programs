#include<stdio.h>
void swap(int *,int *);
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("values in main = %d %d",a,b);
	swap(&a,&b);
}
void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
	printf("values in func = %d %d",*x,*y);
}

