#include <stdio.h>
int zheng(int x)
{
	if(x<10) return x;
	else return 10*zheng(x/10)+x%10;
 }
void ni(int x)
{
 	if(x<10) printf("%d",x);
 	else 
 	{
 		printf("%d",x%10);
 		ni(x/10);
	 }
} 
 void main()
{
 	int a;
 	printf("请输入一个整数："); 
 	scanf("%d",&a);
 	printf("正序数为%d\n",zheng(a));
 	printf("逆序数为"); 
 	ni(a);
}
