#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct yonghu
{
	char num[11];//用户号 
	char name[20];//账户名 
	char code[16];//密码
	int money;//余额 
}YONGHU;
void code(char s[])//密码输入函数，用于密码输入 
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
long chazhaos(FILE *fp,char temps[])//查找函数，用于查找用户号 并返回用户号在文件中的位置 
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
	YONGHU YH,YHT,*p=&YH,*pt=&YHT; //YHT用于暂时存放新建用户，YH用于存放从文件中弹出的用户信息 
	char c,t,temp[15],t1[15],t2[15],temps[11],tempn[20],c1,c2,c3,c4,c5;
	int i=0,n,k,f;
	if((fp=fopen("D:\\文件处理学习\\yonghu.dat","rb+"))==NULL)//打开文件 
	{
		printf("can not open this file.\n");
		exit(0);
    }
	do
	{
		system("cls");
		fflush(stdin);
		printf("是否需要新建账户:\nA 是\tB 否\n");
		c=getchar();
		if(c=='A')//创建新用户 
		{
			fflush(stdin);
			do
			{
				system("cls");
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
				if(chazhaos(fp,temps)) //检查用户号 是否已存在 
				{
					printf("用户号已存在，请重新创建！\n"); 
					goto A;
				}
				strcpy(YHT.num,temps);
				strcpy(YHT.name,tempn);
				printf("请设置密码（15位(含)以下）：\n");
				code(YHT.code); 
				printf("\n请确认密码：\n");//确保密码正确 
				code(temp);
				if(strcmp(temp,YHT.code)==0) printf("\n恭喜你，成功创建账户！\n");
				else 
				{
					while(strcmp(temp,YHT.code)!=0)//确保两次密码输入正确 
					{
						printf("\n两次输入不同！\n请重新设置密码：\n");
						code(YHT.code);
						printf("\n请确认密码：\n");
						code(temp);	
					}
					printf("\n恭喜你，成功创建账户！\n");
				}
				printf("请输入金额：");//新用户设定金额 
				scanf("%d",&YHT.money);
				fflush(stdin);
				fseek(fp,ftell(fp),0);
				if(fwrite(pt,sizeof(YONGHU),1,fp)) printf("输入成功！\n");
				else printf("输入失败！\n");
				printf("是否还要创建账户？\nA 是\tB 否\n");
				c1=getchar();
			}while(c1!='B');
		}
		fflush(stdin);
		if(c=='B'||c1=='B')//老用户登录 
		{ 
			do
			{
				f=1;
				fflush(stdin);
				system("cls"); 
				printf("请尝试登录,输入账号：\n");
				fgets(t2,sizeof(t2),stdin);
				t2[strlen(t2)-1]=0;
				rewind(fp);
				if(!chazhaos(fp,t2)) 
				{
					f=0;
					printf("查无此人！\n");
				}
				else
				{
					n=0;
					rewind(fp);//读取与用户号匹配的数据块 
					fseek(fp,sizeof(YONGHU)*(chazhaos(fp,t2)-1),0);
					fread(p,sizeof(YONGHU),1,fp);
				B:	printf("请输入密码：");
					fflush(stdin);
					code(t1);
					fflush(stdin);
					if(strcmp(t1,p->code)==0)printf("\n%s,成功登录！欢迎您！您的余额为￥%d!\n",p->name,p->money);
					else 
					{
						n++;
						if(n<3) //密码输入错误3次停止登录 
						{
							printf("\n您已错误输入%d次，还有%d次机会！\n",n,3-n);
							goto B;
						}
						else 
						{
							f=0;
							printf("\n3次机会已用完，再见！\n");
						}
					}
				}
				if(f)
				{
					do
					{
						fflush(stdin); 
						printf("是否要对余额进行操作？\nA 是\tB 否\n");//登录成功后对金额进行修改 
						c5=getchar();
						if(c5=='A')
						{
						C:	fflush(stdin);
							printf("请输入要执行的操作：");
							scanf("%c%d",&c4,&k);
							if(c4=='-') p->money-=k;
							else if(c4=='+') p->money+=k;
							else 
							{
								printf("输入错误！\n");
								goto C;
							}
							fseek(fp,sizeof(YONGHU)*(chazhaos(fp,t2)-1),0);
							if(fwrite(p,sizeof(YONGHU),1,fp)) printf("写入成功！\n"); 
						}
					}while(c5!='B');
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
	if(fclose(fp))
	{
		printf("can not close this file.\n");
		exit(0);
	}
 } 
