#include <stdio.h>
void main()
{
	int i,x,r1,r2,r3;
	printf("%s","������ϣ���ﵽ�����Ӷ�����");
	scanf("%d",&x);
	i=1,r1=1,r2=0,r3=0;
    for(i=1;r1+r2+r3<x;r3=r3+r2,r2=r1,r1=r3,i++);
	printf("���ٵ���%d��ʱ���Ӳ��ܴﵽ%d�ԣ�\n",i,x);
 } 
