#include<stdio.h>
main()
{
	int d,m,y,t;
	printf("enter ur dob");
	scanf("%d%d%d",&d,&m,&y);
	if(d>10)
	{
		if(m<=10)
		{
		t=(10+30-d)+(10-1-m)*30+(2016-y)*365;
		printf("lived=%d",t);
	    }
	    else
	    {
	    	t=(10+30-d)+(10+12-1-m)*30+(2016-1-y)*365;
	    	printf("lived=%d",t);
		}
	}
	else
	{
		if(m<=10)
		{
			t=(10-d)+(10-m)*30+(2016-y)*365;
			printf("lived=%d",t);
		}
		else
		{
			t=(10-d)+(10+12-m)*30+(2016-1-y)*365;
			printf("lived=%d",t);
		}
	}
	
}
