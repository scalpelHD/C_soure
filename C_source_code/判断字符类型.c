#include <stdio.h>
int main(void)
{
	char a;
	while(a>=0)
	{
	printf("�������ַ���\n");
	scanf("%c",&a);
	if(a>=0&&a<=57)
	  if(a>=0&&a<=32)
	    printf("���ַ�����Ϊ�����ַ���\n");
	  else
	    if(a>=33&&a<=47)
	      printf("���ַ�����Ϊ�����ַ���\n");
	    else
	      printf("���ַ�����Ϊ�����ַ���\n");
	else
	  if((a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=126))
	    printf("���ַ�����Ϊ�����ַ���\n");
	  else
	    if(a>=65&&a<=90)
	      printf("���ַ�����Ϊ��д��ĸ��\n");
		else
		  printf("���ַ�����ΪСд��ĸ��\n");
	getchar();
	}
	while(1); 
    return 0; 
 } 
