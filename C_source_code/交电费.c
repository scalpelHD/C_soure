#include <stdio.h>
int main(viod)
{
	int a;
	double b;
	printf("�����������\n\a");
	scanf("%d",&a);
	if(a>0)
	  if(a>0&&a<=230)
	    {
		  b=a*0.5283;
		  printf("Ӧ�ɵ��Ϊ%.2lfԪ��\n\a",b);
	    }
	  else
	    if(a>230&&a<=400)
	    {
	      b=230*0.5283+(a-230)*0.5783;
	      printf("Ӧ�ɵ��Ϊ%.2lfԪ!\n\a",b);
	    }
	    else
	    {
	      b=230*0.5283+170*0.5783+(a-400)*0.8783;
	      printf("Ӧ�ɵ��Ϊ%.2lfԪ��\n\a",b);
	    }
	else
	  printf("��������ݴ���\n\a"); 
	return 0;
 }
