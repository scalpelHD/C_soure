#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int x,r,i,a,b;
	char t;
	while(1)
	{
		a=0,b=0;
		i=1;
	while(3)
	{
		srand((int)time(NULL));
		r=rand()%3+1;
		printf("��Ҫ��ʲô����ѡ��A��ʯͷ\tB����\tC��\n");
		scanf(" %c",&t);
		switch(t)
		{
			case 'A':x=1;break;
			case 'B':x=2;break;
			case 'C':x=3;break;
			default:printf("�������(��ƽ��)\n"); 
		}
		if(x==1&&r==1) {printf("����Ҳ����ʯͷ��ƽ�֣�\n");}
		if(x==2&&r==2) {printf("����Ҳ���˼�����ƽ�֣�\n");}
		if(x==3&&r==3) {printf("����Ҳ���˲���ƽ�֣�\n");}
		if(x==1&&r==2) {printf("���Գ��˼�������Ӯ��һ�Σ�\n");a++;} 
		if(x==2&&r==3) {printf("���Գ��˲�����Ӯ��һ�Σ�\n");a++;}
		if(x==3&&r==1) {printf("���Գ���ʯͷ����Ӯ��һ�Σ�\n");a++;}
		if(x==3&&r==2) {printf("���Գ��˼�����������һ�Σ�\n");b++;}
		if(x==1&&r==3) {printf("���Գ��˲���������һ�Σ�\n");b++;}
		if(x==2&&r==1) {printf("���Գ���ʯͷ��������һ�Σ�\n");b++;}
		if(i==3) 
		{
			if(a>b){printf("���ֽ�������ϲ�㣬��Ӯ�ˣ�\n\a");break;}
			if(a==b) {printf("���ֽ�����ƽ�֣�\n");break;}
			if(a<b) {printf("���ֽ��������ź��������ˣ�\n");break;}
		}
	    i++;
	}
    }
 } 
