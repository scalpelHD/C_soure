#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp1;
	char s[80],*p=s;
	if((fp1=fopen("D:\\文件处理学习\\test.txt","a"))==NULL)//打开文件  如以"a+"方式打开文件则不必再关闭文件再打开，但要将指针再次指向文件开头 
	{
		printf("can not open this file.\n");
		exit(0);
	}
	printf("please input a string:\n");
	gets(s);
	while(*p)//一个个字符写入文件 
	{
		fputc(*p,fp1);
		p++;
	}
	fputs(s,fp1);//以字符串写入 
	if(fclose(fp1))//关闭文件 
	{
		printf("can not close this file.\n");
		exit(0);
	}
	if((fp1=fopen("D:\\文件处理学习\\test.txt","r"))==NULL)//再次打开文件
	{
		printf("can nnot open this file.\n");
		exit(0);
	}
	fgets(s,80,fp1);//读取文件 
	puts(s);
	if(fclose(fp1))//再次关闭文件 
	{
		printf("can not close this file.\n");
		exit(0);
	}
}
