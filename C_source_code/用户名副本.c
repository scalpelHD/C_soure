#include <stdio.h>
#include <conio.h>
#include <string.h>
#define N 10
typedef struct yonghu
{
	char s[11];//�û��� 
	char n[20];//�˻��� 
	char m[16];//����
	int money;//��� 
}YONGHU;
void code(char s[])
{
	char t;
	int j=0;
	while((t=getch())!='\r')
	{
		putchar('*');
		s[j++]=t;	
	}
	s[j]=0;
}
void main()
{
	YONGHU YH[N]={"001","ADMINISTOR","001",1}; 
	char c,t,temp[15],t1[15],t2[15],temps[11],tempn[20],c1,c2,c3=' ';
	int i=0,j=0,k=1,n=0,f1=1,f2=1,cu;
	do
	{
		system("cls"); 
		fflush(stdin);
		printf("�Ƿ���Ҫ�½��˻�:\nA ��\tB ��\n");
		c=getchar();
		if(c=='A')
		{
			fflush(stdin);
			if(c3=='A') k++;
			do
			{
				system("cls");
				n=0;
			A:	printf("�������û���(10λ(��)��������)���˻���(�ÿո����)��\n");
				fflush(stdin);
				i=0;
				do
				{
					t=getchar();
					temps[i++]=t;
				}while(t!=' ');
				temps[i-1]=0;
				fgets(tempn,sizeof(tempn),stdin);
				tempn[strlen(tempn)-1]=0;
				for(i=0;i<N;i++) if(strcmp(temps,YH[i].s)==0) break;//����û����Ƿ��Ѵ��� 
				if(i<N) 
				{
					printf("�û����Ѵ��ڣ������´�����\n"); 
					goto A;
				}
				strcpy(YH[k].s,temps);
				strcpy(YH[k].n,tempn);
				printf("���������루15λ(��)���£���\n");
				code(YH[k].m); 
				printf("\n��ȷ�����룺\n");
				code(temp);
				if(strcmp(temp,YH[k].m)==0) printf("\n��ϲ�㣬�ɹ������˻���\n");
				else 
				{
					while(strcmp(temp,YH[k].m)!=0)
					{
						j=0,n=0;
						printf("\n�������벻ͬ��\n�������������룺\n");
						code(YH[k].m);
						printf("\n��ȷ�����룺\n");
						code(temp);	
					}
					printf("\n��ϲ�㣬�ɹ������˻���\n");
				}
				fflush(stdin);
				printf("�Ƿ�Ҫ�����˻���\nA ��\tB ��\n");
				c1=getchar();
				if(c1=='A') k++;
			}while(c1!='B');
		}
		fflush(stdin);
		if(c=='B'||c1=='B')
		{ 
			do
			{
				f1=1;
				f2=1;
				i=0;
				fflush(stdin);
				system("cls"); 
				printf("�볢�Ե�¼,�����˺ţ�\n");
				fgets(t2,sizeof(t2),stdin);
				t2[strlen(t2)-1]=0;
				for(i=0;i<N;i++) if(strcmp(t2,YH[i].s)==0) break;
				if(i==N) 
				{
					printf("���޴��ˣ�\n");
					f1=0;
				}
				if(f1)
				{
					cu=0;
				B:	j=0;
					printf("���������룺");
					fflush(stdin);
					code(t1);
					fflush(stdin);
					if(strcmp(t1,YH[i].m)==0)printf("\n%s,�ɹ���¼����ӭ�㣡\n",YH[i].n);
					else 
					{
						cu++;
						if(cu<3) 
						{
							printf("\n���Ѵ�������%d�Σ�����%d�λ��ᣡ\n",cu,3-cu);
							goto B;
						}
						else printf("3�λ��������꣬�ټ���\n");
					}
				} 
				fflush(stdin);
				printf("�Ƿ�Ҫ������¼��\nA ��\tB ��\n");
				c2=getchar();
			}while(c2!='B');
		}
		fflush(stdin);
		printf("�Ƿ�Ҫ����ʹ�ñ�ϵͳ��\nA ��\tB ��\n");
		c3=getchar();
	}while(c3!='B');
	printf("��лʹ�ã�\n");
 } 
