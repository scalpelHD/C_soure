#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fp1;
	char s[80],*p=s;
	if((fp1=fopen("D:\\�ļ�����ѧϰ\\test.txt","a"))==NULL)//���ļ�  ����"a+"��ʽ���ļ��򲻱��ٹر��ļ��ٴ򿪣���Ҫ��ָ���ٴ�ָ���ļ���ͷ 
	{
		printf("can not open this file.\n");
		exit(0);
	}
	printf("please input a string:\n");
	gets(s);
	while(*p)//һ�����ַ�д���ļ� 
	{
		fputc(*p,fp1);
		p++;
	}
	fputs(s,fp1);//���ַ���д�� 
	if(fclose(fp1))//�ر��ļ� 
	{
		printf("can not close this file.\n");
		exit(0);
	}
	if((fp1=fopen("D:\\�ļ�����ѧϰ\\test.txt","r"))==NULL)//�ٴδ��ļ�
	{
		printf("can nnot open this file.\n");
		exit(0);
	}
	fgets(s,80,fp1);//��ȡ�ļ� 
	puts(s);
	if(fclose(fp1))//�ٴιر��ļ� 
	{
		printf("can not close this file.\n");
		exit(0);
	}
}
