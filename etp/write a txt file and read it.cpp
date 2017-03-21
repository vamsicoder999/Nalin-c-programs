
#include<stdio.h>
#include<conio.h>
#include<process.h>
main()
{
	FILE *fp;
	char c;
	fp=fopen("collect.txt","w");
	if(fp==NULL)
	{
		printf("cant open ");
		exit(1);
	}
	printf("write and press '.' to stop:");
	while(c!='.')
	{
		c=getche();
		fputc(c,fp);
	}
	fclose(fp);
    fp=fopen("collect.txt","r");
	printf("\nreading file:");
	while(!feof(fp))
	printf("%c",fgetc(fp));
	fclose(fp);
	fp=fopen("collect.txt","a");
	if(fp==NULL)
	{
		printf("cant append");
		exit(1);
	}
	else
	{
		c=' ';
	printf("\nappend");
	while(c!='.')
	{
		c=getche();
		fputc(c,fp);
	}
	fclose(fp);
	printf("\nreading again\n");
	fp=fopen("collect.txt","r");
	while(!feof(fp))
	printf("%c",fgetc(fp));
    }
}
