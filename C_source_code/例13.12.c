#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define M 10
#define N 5
void InitChess(char chess[]);
void HumanMove(char chess[]);
void ComputerMove(char chess[]);
void ShowChess(char chess[]);
char WinCheck(char chess[]);
int X,Y;
void main()
{
	char chess[M*M],done='*';
	printf("----Game of Chess----\n");
	printf("Human against the computer\n");
	InitChess(chess);
	do
	{
		ShowChess(chess);// ��ʾ���� 
		HumanMove(chess);//���������� 
		done=WinCheck(chess);//������� 
		if(done!='*') break;//��ʤ���ѷ֣�����ѭ��
		ComputerMove(chess);//���������
		done=WinCheck(chess);//������� 
	}while(done=='*');
	ShowChess(chess);
	if(done=='H') printf("Human won!\n");
	else printf("Computer won!\n");
}
void InitChess(char chess[])//��ʼ������ 
{
	int i,j;
	for(i=0;i<M;i++)
		for(j=0;j<M;j++)
			chess[i+M*j]='*';
}
void HumanMove(char chess[])//���������� 
{
	printf("Please input X,Y coordinates for your move:");
	scanf("%d%d",&X,&Y);
	X--,Y--;
	if(chess[X+Y*M]!='*')
	{
		printf("Invalid move,try again!\n");
		HumanMove(chess);
	} 
	else chess[X+Y*M]='H';
}
void ComputerMove(char chess[])//�������� 
{
	int x=0,y=0,sp=0,a,b,count;
	char t;
	printf("%d  %d\n",X,Y);
	for(x=0;x<M;x++)
		for(y=0;y<M;y++)
			if(chess[x+y*M]=='*') sp++;
	if(sp>0)
	{
				count=1;
				t=chess[X+Y*M];
				for(a=X,b=Y;chess[a+b*M]==t&&a<M&&b<M;a++,b++)//����б�����ڻ����3
					count++;
				if(count>=3)
				{
					if(chess[(X-1)+(Y-1)*M]=='*') 
					{
						x=X-1,y=Y-1;
						goto A;
					}
				}
				count=1;
				for(a=X,b=Y;chess[a+b*M]==t&&a>=0&&b>=0;a--,b--)//����б�����ڻ����3
					count++;
				if(count>=3)
				{
					if(chess[(X+1)+(Y+1)*M]=='*') 
					{
						x=X+1,y=Y+1;
						goto A;
					}
				}
				count=1;
				for(a=X,b=Y;chess[a+b*M]==t&&b<M;b++)//���Ӻ������ڻ����3 
					count++;
				if(count>=3)
				{
					if(chess[X+(Y-1)*M]=='*') 
					{
						x=X,y=Y-1;
						goto A;
					}
				}
				count=1;
				for(a=X,b=Y;chess[a+b*M]==t&&b>=0;b--)//���Ӻ������ڻ����3 
					count++;
				if(count>=3)
				{
					if(chess[X+(Y+1)*M]=='*') 
					{
						x=X,y=Y+1;
						goto A;
					}
				}
				count=1;
				for(a=X,b=Y;chess[a+b*M]==t&&a<M;a++)//�����������ڻ����3
					count++;
				if(count>=3)
				{
					if(chess[(X-1)+Y*M]=='*') 
					{
						x=X-1,y=Y;
						goto A;
					}
				}
				count=1;
				for(a=X,b=Y;chess[a+b*M]==t&&a>=0;a--)//�����������ڻ����3
					count++;
				if(count>=3)
				{
					if(chess[(X+1)+Y*M]=='*') 
					{
						x=X+1,y=Y;
						goto A;
					}
				}
				count=1;
				for(a=X,b=Y;chess[a+b*M]==t&&a<M&&b<M;a++,b--)//����б�����ڻ����3
					count++;
				if(count>=3)
				{
					if(chess[(X-1)+(Y+1)*M]=='*') 
					{
						x=X-1,y=Y+1;
						goto A;
					}
				}
				for(a=X,b=Y;chess[a+b*M]==t&&a>=0&&b>=0;a--,b++)//����б�����ڻ����3
					count++;
				if(count>=3)
				{
					if(chess[(X+1)+(Y-1)*M]=='*') 
					{
						x=X+1,y=Y-1;
						goto A;
					}
				}
		while(chess[x+y*M]!='*')
		{
			srand((int)time(0));
			if(rand()%2) x--,y--;
			else x++,y--;
		}
	A:  chess[x+y*M]='C';
		printf("%d  %d\n",x,y);
	}
	else
	{
		printf("Diamond cut diamond!\n");//����������ƽ�� 
		exit(0);
	}
}
void ShowChess(char chess[])//��ʾ����
{
	int i,j;
	for(i=0;i<M;i++)
	{	
		for(j=0;j<M;j++)
			printf("%-4c",chess[i+j*M]);
		printf("\n");
	}
}
char WinCheck(char chess[])//�ж����ʤ�� 
{
	int i,j,count,a,b;
	char t;
	for(i=0;i<M;i++)
	{
		for(j=0;j<M;j++)
		{
			t=chess[i+j*M];
			count=1;
			if(t!='*')
			{
				for(a=i+1,b=j+1;chess[a+b*M]==t&&a<M&&b<M;a=++b)//����б�����ڻ����5����ʤ���������� 
					count++;
				if(count>=N) return t;
				count=1;
				for(a=i,b=j+1;chess[a+b*M]==t&&b<M;b++)//���Ӻ������ڻ����5����ʤ�������� 
					count++;
				if(count>=N) return t;
				count=1;
				for(a=i+1,b=j;chess[a+b*M]==t&&a<M;a++)//�����������ڻ����5����ʤ���������� 
					count++;
				if(count>=N) return t;
				count=1;
				for(a=i+1,b=j-1;chess[a+b*M]==t&&a<M&&b<M;a++,b--)//����б�����ڻ����5����ʤ���������� 
					count++;
				if(count>=N) return t;
			}
		}
	}
	return '*';
 } 
