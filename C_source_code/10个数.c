#include <stdio.h>
void main()
{
	int i,a;
	int n=0,m=0,x=0,c=0;
	printf("请输入10个整数：");
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
	printf("奇数和平均数为：%.2f\n偶数和平均数为：%.2f\n",(float)m/x,(float)n/c);
 } 
