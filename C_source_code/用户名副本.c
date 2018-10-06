#include <stdio.h>
#include <conio.h>
#include <string.h>
#define N 10
typedef struct yonghu
{
	char s[11];//用户号 
	char n[20];//账户名 
	char m[16];//密码
	int money;//余额 
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
		printf("是否需要新建账户:\nA 是\tB 否\n");
		c=getchar();
		if(c=='A')
		{
			fflush(stdin);
			if(c3=='A') k++;
			do
			{
				system("cls");
				n=0;
			A:	printf("请输入用户号(10位(含)以下数字)、账户名(用空格隔开)：\n");
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
				for(i=0;i<N;i++) if(strcmp(temps,YH[i].s)==0) break;//检查用户号是否已存在 
				if(i<N) 
				{
					printf("用户号已存在，请重新创建！\n"); 
					goto A;
				}
				strcpy(YH[k].s,temps);
				strcpy(YH[k].n,tempn);
				printf("请设置密码（15位(含)以下）：\n");
				code(YH[k].m); 
				printf("\n请确认密码：\n");
				code(temp);
				if(strcmp(temp,YH[k].m)==0) printf("\n恭喜你，成功创建账户！\n");
				else 
				{
					while(strcmp(temp,YH[k].m)!=0)
					{
						j=0,n=0;
						printf("\n两次输入不同！\n请重新设置密码：\n");
						code(YH[k].m);
						printf("\n请确认密码：\n");
						code(temp);	
					}
					printf("\n恭喜你，成功创建账户！\n");
				}
				fflush(stdin);
				printf("是否还要创建账户？\nA 是\tB 否\n");
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
				printf("请尝试登录,输入账号：\n");
				fgets(t2,sizeof(t2),stdin);
				t2[strlen(t2)-1]=0;
				for(i=0;i<N;i++) if(strcmp(t2,YH[i].s)==0) break;
				if(i==N) 
				{
					printf("查无此人！\n");
					f1=0;
				}
				if(f1)
				{
					cu=0;
				B:	j=0;
					printf("请输入密码：");
					fflush(stdin);
					code(t1);
					fflush(stdin);
					if(strcmp(t1,YH[i].m)==0)printf("\n%s,成功登录！欢迎你！\n",YH[i].n);
					else 
					{
						cu++;
						if(cu<3) 
						{
							printf("\n您已错误输入%d次，还有%d次机会！\n",cu,3-cu);
							goto B;
						}
						else printf("3次机会以用完，再见！\n");
					}
				} 
				fflush(stdin);
				printf("是否还要继续登录？\nA 是\tB 否\n");
				c2=getchar();
			}while(c2!='B');
		}
		fflush(stdin);
		printf("是否还要继续使用本系统？\nA 是\tB 否\n");
		c3=getchar();
	}while(c3!='B');
	printf("感谢使用！\n");
 } 
