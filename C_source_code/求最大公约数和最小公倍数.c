#include <stdio.h>
void main()
{
	int a,b,c=1,x,y;
	printf("����������������");
	scanf("%d%d",&a,&b);
	x=a,y=b;
	if(a<b) x=b,y=a;
    for(;c!=0;c=x%y,x=y,y=c); 
	printf("���Լ��Ϊ%d\n��С������Ϊ%d\n",x,(a*b)/x);
 } 
