#include <stdio.h>
#include<math.h>
int main(void)
{
	int a,b,c,d,e,f;
	while(a>=0)
	{ 
	printf("������һ����λ����\n");
	scanf("%d",&a);
	if(a<=99||a>=1000)
	  printf("�������ݴ���\n");
	else
	{
		b=a/100;
		c=a%100;
		d=c/10;
		e=c%10;
		f=pow(b,3)+pow(d,3)+pow(e,3);
		if(f==a)
		  printf("%d��ˮ�ɻ�����\n",a);
	    else
	      printf("%d����ˮ�ɻ�����\n",a);
	}
    }
	while(1); 
    return 0;
 } 
