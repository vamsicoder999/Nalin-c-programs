#include<stdio.h>
main()
{
	int d,m,y,t;
	printf("enter dob");
	scanf("%d %d %d",&d,&m,&y);
	if(m=8)
	{
		if(d>15)
		{
		t=2016-(y-1);
		printf("no of ind yr=%d",t);
	    }
		else
		{
		t=2016-y;
		printf("no of ind yr=%d",t);
	    }
	}
	else if(m>8)
	{
	t=2016-(y-1);
	printf("no of ind yr=%d",t);
    }
	else
	{
	t=2016-y+1;
	printf("no of ind yr=%d",t);
    }   }
