#include <stdio.h>
void main()
{
	char s[1000],*p=s;
	int i=0,n=0,m=0,sum1=0,sum2=0,a[36]={0};
	printf("�������ַ�����\n");
	do
	{
		*p++=getchar();
	}while(*(p-1)!='\n');
	p=s;
	while(*p)
	{
		if(*p>='a'&&*p<='z') a[*p-'a'+10]++,m++,sum2++;
		if(*p>='A'&&*p<='Z') a[*p-'A'+10]++,m++,sum2++;
		if(*p>'0'&&*p<='9') a[*p-'0']++,n++,sum1++;
		p++;
	}
	for(i=0;i<36;i++)
	{
		if(a[i])
		{
			if(i>=0&&i<10) printf("%d��%d\n",i,a[i]);
			if(i>=10&&i<36) printf("%c��%d\n",'A'+i-10,a[i]);
		}
	}
	printf("���ַ����й�������%d������ĸ%d����\n",sum1,sum2);
 } 

