#include <stdio.h>
void main()
{
	int a,b; 
	while(1)
	{
	printf("������һ������10��������");
	scanf("%d",&a);
	if(a>=10)
	{
	for(;a>0;b=a%10,printf("%d",b),a/=10);
    }
    else printf("�������ݴ���");
	printf("\n"); 
    }
 } 
