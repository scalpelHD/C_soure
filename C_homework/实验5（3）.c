#include <stdio.h>
void main()
{
	int i=1,a,b,c;
	printf("���������˵�����Ƶ�ʣ�");
	scanf("%d%d%d",&a,&b,&c);
    for(i=a;!(i%a==0&&i%b==0&&i%c==0);i++); 
	printf("�ٹ�%d�������ֿ���һ�����壡\n",i);
 } 
