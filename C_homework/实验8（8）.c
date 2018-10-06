#include <stdio.h>
void zheng(int n)
{
	if(n>=10) zheng(n/10); 
	putchar(n%10+'0');
 } 
 void main()
 {
 	int a;
 	printf("请输入一个正整数：");
 	scanf("%d",&a);
 	zheng(a);
 }
