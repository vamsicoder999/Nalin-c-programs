#include<stdio.h>
void sum(int x,int y)
{
	int a;
	a=x+y;
	printf("%d",a);
}
void sub(int p,int q)
{
	int b;
	b=p-q;
	printf("%d",b);
}
void mul(int p,int q)
{
	int b;
	b=p*q;
	printf("%d",b);
}
main()
{
	int m,n,l;
	scanf("%d %d",&m,&n);
	printf("enter ur choice:\n1.add\n2.sub\n3.mul");
	scanf("%d",&l);
	switch(l)
	{
		case 1:
			sum(m,n);
			break;
		case 2:
			sub(m,n);
			break;
		case 3:
			mul(m,n);
			break;
	}
}
