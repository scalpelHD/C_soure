#include <stdio.h>
void main()
{
	int a,b; 
	while(1)
	{
	printf("请输入一个大于10的整数：");
	scanf("%d",&a);
	if(a>=10)
	{
	for(;a>0;b=a%10,printf("%d",b),a/=10);
    }
    else printf("输入数据错误！");
	printf("\n"); 
    }
 } 
