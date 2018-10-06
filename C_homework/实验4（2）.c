#include <stdio.h>
#include <math.h>
void main()
{
	int a,b;
	float x,y;
	printf("请输入存款本金(单位:元)：");
	scanf("%d",&a);
	printf("请输入存款期限(单位:年)：");
	scanf("%d",&b);
	switch(b)
	{
    	case 1:printf("到期时本息和为%.2f元！\n",a*pow(1+0.0016,12*b));break;
	    case 2:printf("到期时本息和为%.2f元！\n",a*pow(1+0.0026,12*b));break;
	    case 3:printf("到期时本息和为%.2f元！\n",a*pow(1+0.0039,12*b));break;
    	case 5:printf("到期时本息和为%.2f元！\n",a*pow(1+0.0045,12*b));break;
	    case 8:printf("到期时本息和为%.2f元！\n",a*pow(1+0.0054,12*b));break;
	    default:printf("输入错误！\n");
	}
}


