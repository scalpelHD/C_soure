#include <stdio.h>
void main()
{
	int a,b,c=0,d;
	printf("������һ��������");
	scanf("%d",&a);
	d=a;
	while(a)
	{
		b=a%10;
		c+=b*b;
		a/=10;
	}
	printf("%d��λ������ƽ����Ϊ%d",d,c);
}
