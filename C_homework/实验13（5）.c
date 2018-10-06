#include <stdio.h>
#include<string.h>
void main()
{
	char s[40];
	int i,j,k,f=0;
	printf("请输入：");
	fgets(s,sizeof(s),stdin);
	s[strlen(s)-1]=0; 
	k=strlen(s);
	if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||s[0]=='_')
	for(i=0;i<k;i++)
	{
		if((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='_') f++;
	}
	if(f==k) printf("%s是合法标识符！\n",s);
	else printf("%s不是合法标识符！\n",s); 
 } 
