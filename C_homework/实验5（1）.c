#include <stdio.h>
void main()
{
	int i=0,a,n=0,m=0;
	printf("������10��������");
	while(i<10)
	{
		scanf("%d",&a);
		if(a%2==0) n=n+a;
	    else m=m+a;
	    i++;
	}
	printf("������Ϊ��%d\nż����Ϊ��%d\n",m,n);
 } 
