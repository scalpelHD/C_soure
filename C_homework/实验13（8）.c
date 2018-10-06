#include <stdio.h>
#include <string.h>
void fun(char s[],char t[])
{
	int i,k;
	k=strlen(s)-1;
	for(i=0;i<strlen(s);i++) t[i]=s[i];
	for(i=0;i<strlen(s);i++)t[strlen(s)+i]=s[k--]; 
	t[strlen(t)]='\n';
}
void main()
{
	char s[100],t[100];
	printf("ÇëÊäÈë×Ö·û´®£º");
	fgets(s,sizeof(s),stdin);
	s[strlen(s)-1]=0;
	fun(s,t);
	puts(t);
}
