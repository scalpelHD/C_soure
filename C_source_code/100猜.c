#include <stdio.h>
#include<stdlib.h>
#include<time.h> 
void main()
{
	int x,r,i; 
	while(1)
	{
		srand((int)time(NULL));
		r=rand()%100+1;
		i=1;
	while(3)
	{
		printf("���������ֽ��в²⣺");
		scanf("%d",&x);
		if(x==r) 
		{printf("��¶��ˣ��������ѡ��������%d��\n\a",r);break;}
		if(i==3) 
		{printf("���ν�������û�в¶ԣ����ź�����ѡ��������%d��\n",r);break;}
		if(x<r) printf("��С�ˣ�����ҪŬ����\n");
		if(x>r) printf("�´���, �������Ͱ���\n");
	    i++;
	}
    }
 } 
