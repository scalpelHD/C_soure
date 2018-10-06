#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int x,r,i,a,b;
	char t;
	while(1)
	{
		a=0,b=0;
		i=1;
	while(3)
	{
		srand((int)time(NULL));
		r=rand()%3+1;
		printf("你要出什么，请选择：A，石头\tB剪刀\tC布\n");
		scanf(" %c",&t);
		switch(t)
		{
			case 'A':x=1;break;
			case 'B':x=2;break;
			case 'C':x=3;break;
			default:printf("输入错误！(算平局)\n"); 
		}
		if(x==1&&r==1) {printf("电脑也出了石头，平局！\n");}
		if(x==2&&r==2) {printf("电脑也出了剪刀，平局！\n");}
		if(x==3&&r==3) {printf("电脑也出了布，平局！\n");}
		if(x==1&&r==2) {printf("电脑出了剪刀，你赢了一次！\n");a++;} 
		if(x==2&&r==3) {printf("电脑出了布，你赢了一次！\n");a++;}
		if(x==3&&r==1) {printf("电脑出了石头，你赢了一次！\n");a++;}
		if(x==3&&r==2) {printf("电脑出了剪刀，你输了一次！\n");b++;}
		if(x==1&&r==3) {printf("电脑出了布，你输了一次！\n");b++;}
		if(x==2&&r==1) {printf("电脑出了石头，你输了一次！\n");b++;}
		if(i==3) 
		{
			if(a>b){printf("三局结束，恭喜你，你赢了！\n\a");break;}
			if(a==b) {printf("三局结束，平局！\n");break;}
			if(a<b) {printf("三局结束，真遗憾，你输了！\n");break;}
		}
	    i++;
	}
    }
 } 
