#include <stdio.h>
#include <stdlib.h>
typedef struct stu
{
	char num[10];
	char name[10];
	int score;
}STU;
void main()
{
	FILE *fp;
	STU s;
	int i;
	double avg=0;
	if((fp=fopen("D:\\�ļ�����ѧϰ\\score.txt","w+"))==NULL)//�ԡ�w+����ʽ���ļ�������д�룬�ֿɶ�ȡ 
	{
		printf("can not open this file.\n");
		exit(0);
	}
	for(i=0;i<3;i++)
	{
		printf("������ѧ��ѧ�ţ��������ɼ�");
		scanf("%s%s%d",s.num,s.name,&s.score);
		fprintf(fp,"%s\t%s\t%d\n",s.num,s.name,s.score);//����ʽ����Ϣд���ļ��� 
	}
	rewind(fp);//��ָ������ָ���ļ���ͷ
	for(i=0;i<3;i++)
	{
		fscanf(fp,"%s%s%d",s.num,s.name,&s.score);//����ʽ��ȡ�ļ���Ϣ
		avg+=s.score;
		printf("%s\t%s\t%d\n",s.num,s.name,s.score); 
	}
	printf("average score is:%.2f",avg/3);
	if(fclose(fp))
	{
		printf("can not close this file.\n");
		exit(0);
	 } 
}

