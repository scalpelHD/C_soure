#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	double y;
	printf("请输入整数x的值：\n");
	scanf("%d",&x);
	if(x<=0)
	  printf("%d\n",x);
	else
	{
		switch(x)
		{
			case 1:printf("%d\n",x);break;
			case 2:case 3:case 4:case 5:printf("%d\n",x*x+1);break;
			case 6:case 7:case 8:case 9:y=sqrt(x+1);printf("%.2f\n",y);break;
			default:printf("1/%d\n",++x);
		}
	}
	return 0;
 } 
