#include<stdio.h>
main()
{
	int a,*p;
	printf("enter the no");
	scanf("%d",&a);
	*p=a;
	printf("%d",*p);
	printf("\n%d",p);
	printf("\n%d",&a);
	printf("\n%d",a);
}
