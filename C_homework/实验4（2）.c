#include <stdio.h>
#include <math.h>
void main()
{
	int a,b;
	float x,y;
	printf("���������(��λ:Ԫ)��");
	scanf("%d",&a);
	printf("������������(��λ:��)��");
	scanf("%d",&b);
	switch(b)
	{
    	case 1:printf("����ʱ��Ϣ��Ϊ%.2fԪ��\n",a*pow(1+0.0016,12*b));break;
	    case 2:printf("����ʱ��Ϣ��Ϊ%.2fԪ��\n",a*pow(1+0.0026,12*b));break;
	    case 3:printf("����ʱ��Ϣ��Ϊ%.2fԪ��\n",a*pow(1+0.0039,12*b));break;
    	case 5:printf("����ʱ��Ϣ��Ϊ%.2fԪ��\n",a*pow(1+0.0045,12*b));break;
	    case 8:printf("����ʱ��Ϣ��Ϊ%.2fԪ��\n",a*pow(1+0.0054,12*b));break;
	    default:printf("�������\n");
	}
}


