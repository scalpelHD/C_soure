#include <stdio.h>
#include <string.h>
int fun(char s[],char s0[])
{
	int i,j,k,n=0,f;
	for(i=0;i<strlen(s);i++)
	{
		f=1;
		if(s[i]==s0[0])
		{ 
			k=i;
			for(j=0;j<3;j++) if(s[k++]!=s0[j]) f=0;
			if(f) n++;
		}		
	}
	return n;
}
void main()
{
	char s[1000],s0[4];
	int n;
	printf("请输入母子符串：");
	fgets(s,sizeof(s),stdin);
	s[strlen(s)-1]=0;
	printf("请输入长度为3的子字符串：");
	fgets(s0,sizeof(s0),stdin);
	n=fun(s,s0);
	printf("子字符串在母子符串中出现了%d次！\n",n);
}
