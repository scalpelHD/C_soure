#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp1,*fp2;
	char c;
	if((fp1=fopen("D:\\文件处理学习\\test.txt","r"))==NULL)//打开test文件 
	{
		printf("can not open this file.\n");
		exit(0);
	}
	if((fp2=fopen("D:\\文件处理学习\\cptest.txt","w"))==NULL)//打开cptest文件 
	{
		printf("can not open this file.\n");
		exit(0);
	}
	c=fgetc(fp1);
	while(!feof(fp1))//使用feof函数检查指针是否到达文件末尾 
	{
		fputc(c,fp2);
		c=fgetc(fp1);
	}
	if(fclose(fp1))
	{
		printf("can not close this file.\n");
		exit(0);
	}
	if(fclose(fp2))
	{
		printf("can not close this file.\n");
		exit(0);
	}
 } 
