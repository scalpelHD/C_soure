#include <stdio.h>
#include<stdlib.h>
#include<time.h> 
void main()
{
	int x,r,i; 
	while(1)
	{
		srand((int)time(NULL));
		r=rand()%100+1;
		i=1;
	while(3)
	{
		printf("请输入数字进行猜测：");
		scanf("%d",&x);
		if(x==r) 
		{printf("你猜对了，真棒！我选的数字是%d。\n\a",r);break;}
		if(i==3) 
		{printf("三次结束，你没有猜对，真遗憾！我选的数字是%d。\n",r);break;}
		if(x<r) printf("猜小了，还需要努力。\n");
		if(x>r) printf("猜大了, 继续加油啊。\n");
	    i++;
	}
    }
 } 
