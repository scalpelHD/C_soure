#include <stdio.h>
void main()
{
	int i,a;
	int n=0,m=0,x=0,c=0;
	printf("������10��������");
	while(i<10)
	{
		scanf("%d",&a);
		if(a%2==0) 
		{
		n=n+a;
		c++;
	    }
	    else
		{ 
		m=m+a;
		x++;
	    }
	    i++;
	}
	printf("������ƽ����Ϊ��%.2f\nż����ƽ����Ϊ��%.2f\n",(float)m/x,(float)n/c);
 } 
