#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp1,*fp2;
	char c;
	if((fp1=fopen("D:\\�ļ�����ѧϰ\\test.txt","r"))==NULL)//��test�ļ� 
	{
		printf("can not open this file.\n");
		exit(0);
	}
	if((fp2=fopen("D:\\�ļ�����ѧϰ\\cptest.txt","w"))==NULL)//��cptest�ļ� 
	{
		printf("can not open this file.\n");
		exit(0);
	}
	c=fgetc(fp1);
	while(!feof(fp1))//ʹ��feof�������ָ���Ƿ񵽴��ļ�ĩβ 
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
