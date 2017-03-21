#include<stdio.h>
main()
{
	int i,a[8];
	printf("enter array elements\n");
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements are");
	for(i=0;i<8;i++)
	{
		printf("\n %d",a[i]);
	}
}
