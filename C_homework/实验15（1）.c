#include <stdio.h>
void main()
{
	char s[10000],*p=s;
	int z=0;
	printf("������һ��Ӣ�ľ��ӣ�\n");
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
	printf("��Ӣ�ľ��ӹ�����ĸ%d����\n",z);
 } 
