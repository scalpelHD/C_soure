#include <stdio.h>
void main()
{
	int a,b,c=1,d,i=1,x,y;
	printf("请输入两个整数：");
	scanf("%d%d",&a,&b);
	x=a,y=b;
	if(a<b) x=b,y=a;
    for(;!(c==0);c=x%y,x=y,y=c);
    for(i=b;!(i%a==0&&i%b==0);i++); 
	printf("最大公约数为%d\n最小公倍数为%d\n",x,i);
 } 
