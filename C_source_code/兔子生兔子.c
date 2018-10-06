#include <stdio.h>
void main()
{
	int i,x,r1,r2,r3;
	printf("%s","请输入希望达到的兔子对数：");
	scanf("%d",&x);
	i=1,r1=1,r2=0,r3=0;
    for(i=1;r1+r2+r3<x;r3=r3+r2,r2=r1,r1=r3,i++);
	printf("至少到第%d月时兔子才能达到%d对！\n",i,x);
 } 
