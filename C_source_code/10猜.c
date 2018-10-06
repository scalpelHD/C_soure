#include <stdio.h>
#include<time.h> 
void main()
{
	int x,r,i,y;
	float t,z,a;
	while(1)
	{
		srand(time(NULL));
		r=rand()%10+1;
		y=rand()%10+1;
		i=1;
	while(3)
	{
		printf("请输入数字进行猜测：");
		scanf("%d",&x);
		if(x==r) {printf("你猜对了，真棒！我选的数字是%d。\n\a",r);break;} 
		if(i==3) {printf("三次结束，你没有猜对，真遗憾！我选的数字是%d。\n",r);break;} 
		if(x<r) printf("猜小了，还需要努力。\n");
		if(x>r) printf("猜大了, 继续加油啊。\n");
	    i++;
	}
	if(y==2) printf("这种无聊的游戏你都玩，你还真是无聊透顶了。！！！！\n");
	if(y==4) printf("你和我的默契度是个谜！！！！！\n");
	if(y==5) printf("让你跨出人类的一大步！\n\n\n\n\n\n\n\n");
	if(y==7) {printf("本宝宝不想和你玩了！（傻了吧，玩不了了吧，哈哈哈哈哈哈！！！！！");break;} 
	if(y==3)
	{
		for ( z = 1.5f; z > -1.5f; z -= 0.1f) 
		{  
        for ( t = -1.5f; t < 1.5f; t += 0.05f)
		 {  
             a = t * t + z * z - 1;  
            putchar(a * a * a - t * t * z * z * z <= 0.0f ? '*' : ' ');  
        }  
        putchar('\n');  
    } 
		printf("谢谢你陪我玩这么无聊的游戏，给你笔芯!!!\n"); 
	}
    }
    while(1);
 } 
