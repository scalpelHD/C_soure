#include <stdio.h>
int tuzi(int n)
{
	if(n==1||n==2) return 1;
	else return tuzi(n-1)+tuzi(n-2);
}
void main()
{
	int n;
	printf("������������");
	scanf("%d",&n);
	printf("%d�º���%d�����ӡ�",n,tuzi(n)); 
}
