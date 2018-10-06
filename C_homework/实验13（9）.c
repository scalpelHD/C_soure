#include <stdio.h>
#include<string.h>
void main()
{
	char s1[1000],s2[100];
	int i,j,k,f,t;
	printf("请输入字符串：");
	fgets(s1,sizeof(s1),stdin);
	s1[strlen(s1)-1]=0;
	printf("请输入要删除的子字符串：");
	fgets(s2,sizeof(s2),stdin);
	s2[strlen(s2)-1]=0;
	for(i=0;i<strlen(s1);i++)
	{
		f=1;
		if(s1[i]==s2[0])
		{
			k=i;
			for(j=0;j<strlen(s2);j++) if(s1[k++]!=s2[j]) f=0;
		    if(f) for(t=i;s1[t]!=0;t++) s1[t]=s1[t+strlen(s2)];
		}
	}
	s1[strlen(s1)]='\n';
	puts(s1);
 } 
