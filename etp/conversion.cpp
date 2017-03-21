#include<stdio.h>
int meter(int KM);
int feet(int KM);
int miles(int KM);
main()
{
	int k,l,q;
	printf("enter ur choice:");
	printf("\n1.km to meter\n2.km to feet\n3.km to miles\n");
	scanf("%d",&l);
	switch(l)
	{
		case 1:
			printf("enter km");
			scanf("%d",&k);
			meter(k);
			break;
		case 2:
			printf("enter km");
			scanf("%d",&k);
			q=feet(k);
			printf("%d",q);
			break;
		case 3:
			printf("enter km");
			scanf("%d",&k);
			miles(k);
			break;
		default:
			printf("enter valid choice");
			break;		
	}
}
int meter(int x)
{
	int z;
	z=x*1000;
	printf("\n%d meter",z);
}
int feet(int x)
{
	float z;
	z=x*3280.84;
	return z;
}
int miles(int x)
{
	float z;
	z=x*0.621;
	printf("\n%f miles",z);
}
