#include<stdio.h>
main()
{
	int d,m,y,t,b,c;
	printf("enter dob:");
	scanf("%d %d %d",&d,&m,&y);
	printf("\ndob=%d:%d:%d",d,m,y);
	t=365;
	printf("\ntotal no of days lived=%d",t);
}
