#include <stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char s[1000];
	int i=0,k=0,n[100]={0},j=0,max;
	printf("������һ��Ӣ�ľ��ӣ�");
	gets(s);
    for(;i<strlen(s);)
	{
		while(isalpha(s[i])) n[k]++,i++;
		k++,i++;
	}
	max=n[0];
	for(i=0;i<k;i++) if(max<n[i]) max=n[i],j=i;
	i=0,k=0;
	for(;;i++)
	{
		if(s[i]==' ') k++;
		if(k==j) break;
	}
	i++;
	printf("��Ӣ�ľ�������ĵ����ǣ�");
	while(isalpha(s[i])) printf("%c",s[i++]);
	printf("\n");
 } 
