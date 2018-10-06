#include <stdio.h>
void main()
{
	int i=0,a,n=0,m=0;
	printf("请输入10个整数：");
	while(i<10)
	{
		scanf("%d",&a);
		if(a%2==0) n=n+a;
	    else m=m+a;
	    i++;
	}
	printf("奇数和为：%d\n偶数和为：%d\n",m,n);
 } 
