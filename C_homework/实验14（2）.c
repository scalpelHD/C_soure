#include <stdio.h>
void main()
{
	int a,b,c,*pa=&a,*pb=&b,*pc=&c,*t;
	printf("请输入三个整数：");
	scanf("%d%d%d",pa,pb,pc);
	if(*pa<*pb) t=pa,pa=pb,pb=t;
	if(*pa<*pc) t=pa,pa=pc,pc=t;
	if(*pb<*pc) t=pb,pb=pc,pc=t;
	printf("%d\t%d\t%d\n",*pa,*pb,*pc);
 } 
