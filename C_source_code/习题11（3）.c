#include <stdio.h>
#include<string.h> 
#define N 3
typedef struct stu
{
	char n[20];
	char xm[20];
	char sex[2];
	int score;
}STU;
void scan(STU s[])
{
	int i=0;
	printf("请输入学生信息：\n");
	do
	{
		fflush(stdin);
		printf("学号：");
		gets(s[i].n);
		fflush(stdin);
		printf("姓名：");
		gets(s[i].xm);
		fflush(stdin);
		printf("性别：");
		gets(s[i].sex);
		printf("C语言成绩：");
		scanf("%d",&s[i].score);
		i++;
	}while(i<N);
}
void pai(STU s[])
{
	int i,j,k;
	STU t;
	for(i=0;i<N;i++)
	{
		k=i;
		for(j=i+1;j<10;j++)
		if(s[k].score<s[j].score) k=j;
		if(k!=i) t=s[i],s[i]=s[k],s[k]=t;
	}
}
void main()
{
	STU s[N];
	int i,na=0,nv=0,sum1=0,sum2=0;
	double av1,av2;
	char y[2]="女";
	scan(s);
    pai(s);
	for(i=0;i<N;i++)
	{
		if(strcmp(s[i].sex,y)==0) nv++,sum2+=s[i].score;
		else na++,sum1+=s[i].score;
	}
	av1=(double)sum1/na;
	av2=(double)sum2/nv;
	for(i=0;i<N;i++) printf("%s\t%s\t%s\t%d\n",s[i].n,s[i].xm,s[i].sex,s[i].score);
	printf("男生平均成绩%.2f分，女生平均成绩%.2f分。\n",av1,av2);
}
