#include <stdio.h>
#include <string.h>
void main()
{
	char s[1000];
	int i,f=1;
	printf("�������ַ�����");
	fgets(s,sizeof(s),stdin);
	s[strlen(s)-1]=0;
	for(i=0;i<strlen(s)/2;i++) if(s[i]!=s[strlen(s)-1-i]) f=0;
	if(f) printf("%s�ǻ����ַ�����\n",s);
	else printf("%s���ǻ����ַ�����\n",s);
}

