#include<stdio.h>
main()
{
	int d,m,y;
	printf("enter dob");
	scanf("%d %d %d",&d,&m,&y);
	printf("dob=%d:%d:%d",d,m,y);
	y=(2016-y)*365;
	if(m<11)
	{
	if(m%2==0)
		
	else
	    m=(11*m)*31;
	}
	else
	{
	if(m%2==0)
		m=(m-11)*30;
	else
	    m=(m-11)*31;
	}
	if(d<)
}  
