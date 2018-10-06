#include <stdio.h>
#include <string.h>
void main()
{
	char s[1000];
	int i,f=1;
	printf("请输入字符串：");
	fgets(s,sizeof(s),stdin);
	s[strlen(s)-1]=0;
	for(i=0;i<strlen(s)/2;i++) if(s[i]!=s[strlen(s)-1-i]) f=0;
	if(f) printf("%s是回文字符串！\n",s);
	else printf("%s不是回文字符串！\n",s);
}

