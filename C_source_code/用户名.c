#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct yonghu
{
	char num[11];//�û��� 
	char name[20];//�˻��� 
	char code[16];//����
	int money;//��� 
}YONGHU;
void code(char s[])//�������뺯���������������� 
{
	char t;
	int i=0;
	while((t=getch())!='\r')
	{
		if(i==0&&t=='\b') continue;
		if(i<0) 
		{
			i=0;
			continue;
		}
		if(t=='\b')
		{
			printf("\b ");
			s[--i]=0;
			printf("\b");
			continue;
		}
		putchar('*');
		s[i++]=t;
	}
	s[i]=0;
}
long chazhaos(FILE *fp,char temps[])//���Һ��������ڲ����û��� �������û������ļ��е�λ�� 
{
	int n,i;
	YONGHU YH,*p=&YH;
	fseek(fp,0,2);
	n=ftell(fp)/sizeof(YONGHU);
	rewind(fp);
	for(i=0;i<n;i++) 
	{
		fread(p,sizeof(YONGHU),1,fp);
		if(strcmp(p->num,temps)==0) break;
		
	}
	return i<n?i+1:0;
}
void main()
{
	FILE *fp;
	YONGHU YH,YHT,*p=&YH,*pt=&YHT; //YHT������ʱ����½��û���YH���ڴ�Ŵ��ļ��е������û���Ϣ 
	char c,t,temp[15],t1[15],t2[15],temps[11],tempn[20],c1,c2,c3,c4,c5;
	int i=0,n,k,f;
	if((fp=fopen("D:\\�ļ�����ѧϰ\\yonghu.dat","rb+"))==NULL)//���ļ� 
	{
		printf("can not open this file.\n");
		exit(0);
    }
	do
	{
		system("cls");
		fflush(stdin);
		printf("�Ƿ���Ҫ�½��˻�:\nA ��\tB ��\n");
		c=getchar();
		if(c=='A')//�������û� 
		{
			fflush(stdin);
			do
			{
				system("cls");
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
				if(chazhaos(fp,temps)) //����û��� �Ƿ��Ѵ��� 
				{
					printf("�û����Ѵ��ڣ������´�����\n"); 
					goto A;
				}
				strcpy(YHT.num,temps);
				strcpy(YHT.name,tempn);
				printf("���������루15λ(��)���£���\n");
				code(YHT.code); 
				printf("\n��ȷ�����룺\n");//ȷ��������ȷ 
				code(temp);
				if(strcmp(temp,YHT.code)==0) printf("\n��ϲ�㣬�ɹ������˻���\n");
				else 
				{
					while(strcmp(temp,YHT.code)!=0)//ȷ����������������ȷ 
					{
						printf("\n�������벻ͬ��\n�������������룺\n");
						code(YHT.code);
						printf("\n��ȷ�����룺\n");
						code(temp);	
					}
					printf("\n��ϲ�㣬�ɹ������˻���\n");
				}
				printf("�������");//���û��趨��� 
				scanf("%d",&YHT.money);
				fflush(stdin);
				fseek(fp,ftell(fp),0);
				if(fwrite(pt,sizeof(YONGHU),1,fp)) printf("����ɹ���\n");
				else printf("����ʧ�ܣ�\n");
				printf("�Ƿ�Ҫ�����˻���\nA ��\tB ��\n");
				c1=getchar();
			}while(c1!='B');
		}
		fflush(stdin);
		if(c=='B'||c1=='B')//���û���¼ 
		{ 
			do
			{
				f=1;
				fflush(stdin);
				system("cls"); 
				printf("�볢�Ե�¼,�����˺ţ�\n");
				fgets(t2,sizeof(t2),stdin);
				t2[strlen(t2)-1]=0;
				rewind(fp);
				if(!chazhaos(fp,t2)) 
				{
					f=0;
					printf("���޴��ˣ�\n");
				}
				else
				{
					n=0;
					rewind(fp);//��ȡ���û���ƥ������ݿ� 
					fseek(fp,sizeof(YONGHU)*(chazhaos(fp,t2)-1),0);
					fread(p,sizeof(YONGHU),1,fp);
				B:	printf("���������룺");
					fflush(stdin);
					code(t1);
					fflush(stdin);
					if(strcmp(t1,p->code)==0)printf("\n%s,�ɹ���¼����ӭ�����������Ϊ��%d!\n",p->name,p->money);
					else 
					{
						n++;
						if(n<3) //�����������3��ֹͣ��¼ 
						{
							printf("\n���Ѵ�������%d�Σ�����%d�λ��ᣡ\n",n,3-n);
							goto B;
						}
						else 
						{
							f=0;
							printf("\n3�λ��������꣬�ټ���\n");
						}
					}
				}
				if(f)
				{
					do
					{
						fflush(stdin); 
						printf("�Ƿ�Ҫ�������в�����\nA ��\tB ��\n");//��¼�ɹ���Խ������޸� 
						c5=getchar();
						if(c5=='A')
						{
						C:	fflush(stdin);
							printf("������Ҫִ�еĲ�����");
							scanf("%c%d",&c4,&k);
							if(c4=='-') p->money-=k;
							else if(c4=='+') p->money+=k;
							else 
							{
								printf("�������\n");
								goto C;
							}
							fseek(fp,sizeof(YONGHU)*(chazhaos(fp,t2)-1),0);
							if(fwrite(p,sizeof(YONGHU),1,fp)) printf("д��ɹ���\n"); 
						}
					}while(c5!='B');
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
	if(fclose(fp))
	{
		printf("can not close this file.\n");
		exit(0);
	}
 } 
