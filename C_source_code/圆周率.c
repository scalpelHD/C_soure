#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void main()
{
	FILE *fp;
	char s[15103],c,t[5];
	int i=0,j=0,k,f;
	if((fp=fopen("D:\\文件处理学习\\pi_digit.txt","r"))==NULL)
	{
		printf("can not open this file!\n");
		exit(0);
	}
	while(i<15102)
	{
		c=fgetc(fp);
		if(c=='\n') continue;
		s[i++]=c;
	}
	printf("请输入生日："); 
	fgets(t,sizeof(t),stdin);
	for(i=2;i<strlen(s);i++)
	{
		if(s[i]==t[0])
		{
			if(i+strlen(t)>strlen(s))
			{
				printf("并没有！");
				break;
			}
			k=i;
			f=1;
			for(j=0;j<strlen(t);j++) if(t[j]!=s[k++]) f=0;
			if(f)
			{
				printf("%s在第%d位！\n",t,i-1);
				break;
			}
		}
	}
	if(i>=strlen(s)) printf("并没有！");
	if(fclose(fp))
	{
		printf("can not close this file!\n");
		exit(0);
	}
 } 
