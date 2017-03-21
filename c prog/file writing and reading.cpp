#include<stdio.h>
#include<conio.h>
#include<process.h>
main()
{
	char c;
	FILE *fp;
	fp=fopen("asdf.txt","w");
	if(fp==NULL)
	{
		printf("cant open");
		exit(1);
	}
	printf("enter data and press '.' to stop\n");
	while(c!='.')
	{
		c=getche();
		fputc(c,fp);
	}
	fclose(fp);
	printf("\nreading data\n");
	fp=fopen("asdf.txt","r");
	while(!feof(fp))
	printf("%c",fgetc(fp));
}
