#include <stdio.h>
void main()
{
	int t,s[1000],*p=s,*p1,i,n=0;
	char c,*pc=&c;
	printf("请输入数组元素（以输入'/'为结束标志）：");
	do
	{
		scanf("%d%c",p++,pc);
		n++;
	}while(*pc!='/');
	p1=&s[n-1];
	p=s;
	for(i=0;i<n/2;i++)
	{
		t=*p;
		*p=*p1;
		*p1=t;
		p++;
		p1--;
	}
	p=s;
	for(i=0;i<n;i++) printf("%d\t",p[i]);
 } 
