#include <stdio.h>
void main()
{
	char s[10000],*p=s;
	int z=0;
	printf("请输入一个英文句子：\n");
	do
	{
		*p++=getchar();
	}while(*(p-1)!='\n');
	p=s;
	while(*p!=0)
	{
		if(*p>='a'&&*p<='z') z++;
		if(*p>='A'&&*p<='Z') z++;
		p++;
	}
	printf("该英文句子共有字母%d个。\n",z);
 } 
