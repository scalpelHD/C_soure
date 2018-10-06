#include <stdio.h>
int main(void)
{
	char a,b; 
	float x;
	while(x>0)
	{ 
    printf("请选择商品类别：\nA、日用品\tB、文具 \tC、食品\n");
	scanf("%c",&a);
	switch(a)
	{
        case 'A':
	    {
		printf("A、牙刷（3.5元/支）\tB、牙膏（9.5元/支）\tC、肥皂（5.0元/支）\n请选择商品：");
		scanf(" %c",&b);
		printf("请输入数量：");
		scanf("%f",&x);
		switch(b)
		{
			case 'A':printf("总价格为：%.2f元。\n欢迎下次光临！\n",3.5*x);break;
			case 'B':printf("总价格为：%.2f元。\n欢迎下次光临！\n",9.5*x);break;
			case 'C':printf("总价格为：%.2f元。\n欢迎下次光临！\n",5.0*x);break;
			default:printf("输入错误！\a\n");					
		}
	    }break; 
	    case 'B':
		{
			printf("A、铅笔（1.0元/支）\tB、橡皮（2.5元/块）\tC、直尺（2.0元/支）\n请选择商品：");
			scanf(" %c",&b);
			printf("请输入数量：");
			scanf("%f",&x);
			switch(b)
			   {
					case 'A':printf("总价格为：%.2f元。\n欢迎下次光临！\n",1.0*x);break;
					case 'B':printf("总价格为：%.2f元。\n欢迎下次光临！\n",2.5*x);break;
					case 'c':printf("总价格为：%.2f元。\n欢迎下次光临！\n",2.0*x);break;
					default:printf("输入错误！\a\n");					
				}
		}break;
	    case 'C':
		{
			printf("A、蛋糕（5.0元/块）\tB、饮料（2.5元/瓶）\tC、方便面（2.0元/袋）\n请选择商品：");
			scanf(" %c",&b);
			printf("请输入数量：");
			scanf("%f",&x);
			switch(b)
				{
					case 'A':printf("总价格为：%.2f元。\n欢迎下次光临！\n",5.0*x);break;
					case 'B':printf("总价格为：%.2f元。\n欢迎下次光临！\n",2.5*x);break;
					case 'C':printf("总价格为：%.2f元。\n欢迎下次光临！\n",2.0*x);break;
					default:printf("输入错误！\a\n");					
				}
		}break;
		default:printf("输入错误！\a\n");
   }
   getchar();
   }
   return 0;
}
