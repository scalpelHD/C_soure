#include <stdio.h>
#include<minfile.h>
void main()
{
	int a,b,c;
	printf("����������������");
	scanf("%d%d%d",&a,&b,&c);
	printf("��С������%d��\n",min(c,min(a,b)));
}
