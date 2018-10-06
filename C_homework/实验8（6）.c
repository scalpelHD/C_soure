#include <stdio.h>
int tuzi(int n)
{
	if(n==1||n==2) return 1;
	else return tuzi(n-1)+tuzi(n-2);
}
void main()
{
	int n;
	printf("请输入月数：");
	scanf("%d",&n);
	printf("%d月后共有%d对兔子。",n,tuzi(n)); 
}
