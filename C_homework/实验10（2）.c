#include <stdio.h>
#define n 10
void main()
{
	int a,b[n],i;
	printf("������10��������");
	for(i=0;i<n;i++) scanf("%d",&b[i]);
	printf("������Ҫ���ҵ�����");
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
	if(b[i]==a) 
	{
		printf("%d",i+1);
		break;
	}
    }	
	if(i>=a) printf("-1\n");
 } 
