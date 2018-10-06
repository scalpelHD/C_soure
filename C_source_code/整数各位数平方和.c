#include <stdio.h>
void main()
{
	int a,b,c=0,d;
	printf("请输入一个整数：");
	scanf("%d",&a);
	d=a;
	while(a)
	{
		b=a%10;
		c+=b*b;
		a/=10;
	}
	printf("%d各位上数字平方和为%d",d,c);
}
