#include <stdio.h>
int main(void)
{
	char a,b; 
	float x;
	while(x>0)
	{ 
    printf("��ѡ����Ʒ���\nA������Ʒ\tB���ľ� \tC��ʳƷ\n");
	scanf("%c",&a);
	switch(a)
	{
        case 'A':
	    {
		printf("A����ˢ��3.5Ԫ/֧��\tB�����ࣨ9.5Ԫ/֧��\tC������5.0Ԫ/֧��\n��ѡ����Ʒ��");
		scanf(" %c",&b);
		printf("������������");
		scanf("%f",&x);
		switch(b)
		{
			case 'A':printf("�ܼ۸�Ϊ��%.2fԪ��\n��ӭ�´ι��٣�\n",3.5*x);break;
			case 'B':printf("�ܼ۸�Ϊ��%.2fԪ��\n��ӭ�´ι��٣�\n",9.5*x);break;
			case 'C':printf("�ܼ۸�Ϊ��%.2fԪ��\n��ӭ�´ι��٣�\n",5.0*x);break;
			default:printf("�������\a\n");					
		}
	    }break; 
	    case 'B':
		{
			printf("A��Ǧ�ʣ�1.0Ԫ/֧��\tB����Ƥ��2.5Ԫ/�飩\tC��ֱ�ߣ�2.0Ԫ/֧��\n��ѡ����Ʒ��");
			scanf(" %c",&b);
			printf("������������");
			scanf("%f",&x);
			switch(b)
			   {
					case 'A':printf("�ܼ۸�Ϊ��%.2fԪ��\n��ӭ�´ι��٣�\n",1.0*x);break;
					case 'B':printf("�ܼ۸�Ϊ��%.2fԪ��\n��ӭ�´ι��٣�\n",2.5*x);break;
					case 'c':printf("�ܼ۸�Ϊ��%.2fԪ��\n��ӭ�´ι��٣�\n",2.0*x);break;
					default:printf("�������\a\n");					
				}
		}break;
	    case 'C':
		{
			printf("A�����⣨5.0Ԫ/�飩\tB�����ϣ�2.5Ԫ/ƿ��\tC�������棨2.0Ԫ/����\n��ѡ����Ʒ��");
			scanf(" %c",&b);
			printf("������������");
			scanf("%f",&x);
			switch(b)
				{
					case 'A':printf("�ܼ۸�Ϊ��%.2fԪ��\n��ӭ�´ι��٣�\n",5.0*x);break;
					case 'B':printf("�ܼ۸�Ϊ��%.2fԪ��\n��ӭ�´ι��٣�\n",2.5*x);break;
					case 'C':printf("�ܼ۸�Ϊ��%.2fԪ��\n��ӭ�´ι��٣�\n",2.0*x);break;
					default:printf("�������\a\n");					
				}
		}break;
		default:printf("�������\a\n");
   }
   getchar();
   }
   return 0;
}
