#include<stdio.h>
main()
{
	int m;
	printf("enter total marks");
	scanf("%d",&m);
	if(m>=90)
	printf("grade is A");
	else if(m<90 && m>=80)
	printf("grade is B");
	else
	printf("FAIL");
}
