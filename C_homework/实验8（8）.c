#include <stdio.h>
void zheng(int n)
{
	if(n>=10) zheng(n/10); 
	putchar(n%10+'0');
 } 
 void main()
 {
 	int a;
 	printf("������һ����������");
 	scanf("%d",&a);
 	zheng(a);
 }
