#include<stdio.h>
#include <string.h>
void main()
{
	char n[100],s[100],*p=s,t[100];
	int k=0,i=0;
	printf("请输入一个整数：");
	gets(s);
	while(*p!=0)
	{
		n[strlen(s)-1-i]=s[i];
		i++,p++;
	}
	p=n;
	while(*p!=0)
	{
		k++;
		if(k%3==0)
		{
			strcpy(t,p+1);
			*(p+1)=',';
			*(p+2)=0;
			strcat(n,t);
			p+=1;
		}
		p++;
	}
	if(k%3==0) n[strlen(n)-1]=0;
	p=n,i=0;
	while(*p!=0)
	{
		s[strlen(n)-1-i]=n[i];
		i++,p++;
	}
	s[strlen(n)]=0;
	puts(s);
}
