#include <stdio.h>
void main()
{
	int a[10],*p=a,i,m=0,n=0,s=0;
	printf("������10������");
	for(i=0;i<10;i++) scanf("%d",p++);
	p=a;
	for(i=0;i<10;i++)
	{
		if(*p>0) m++;
		if(*p<0) n++;
		s+=*p;
		p++;
	}
	p=a;
	for(i=0;i<10;i++) printf("%d\t",*p++);
	printf("\n������%d����������%d�����ܺ�Ϊ%d\n",m,n,s); 
 } 
