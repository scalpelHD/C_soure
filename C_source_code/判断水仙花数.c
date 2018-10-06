#include <stdio.h>
#include<math.h>
int main(void)
{
	int a,b,c,d,e,f;
	while(a>=0)
	{ 
	printf("请输入一个三位数：\n");
	scanf("%d",&a);
	if(a<=99||a>=1000)
	  printf("输入数据错误！\n");
	else
	{
		b=a/100;
		c=a%100;
		d=c/10;
		e=c%10;
		f=pow(b,3)+pow(d,3)+pow(e,3);
		if(f==a)
		  printf("%d是水仙花数！\n",a);
	    else
	      printf("%d不是水仙花数！\n",a);
	}
    }
	while(1); 
    return 0;
 } 
