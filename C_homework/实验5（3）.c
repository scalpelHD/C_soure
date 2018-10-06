#include <stdio.h>
void main()
{
	int i=1,a,b,c;
	printf("请输入三人的下棋频率：");
	scanf("%d%d%d",&a,&b,&c);
    for(i=a;!(i%a==0&&i%b==0&&i%c==0);i++); 
	printf("再过%d天他们又可以一起下棋！\n",i);
 } 
