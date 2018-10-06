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
	if((fp=fopen("D:\\文件处理学习\\score.txt","w+"))==NULL)//以‘w+’方式打开文件，即可写入，又可读取 
	{
		printf("can not open this file.\n");
		exit(0);
	}
	for(i=0;i<3;i++)
	{
		printf("请输入学生学号，姓名，成绩");
		scanf("%s%s%d",s.num,s.name,&s.score);
		fprintf(fp,"%s\t%s\t%d\n",s.num,s.name,s.score);//按格式将信息写入文件中 
	}
	rewind(fp);//将指针重新指向文件开头
	for(i=0;i<3;i++)
	{
		fscanf(fp,"%s%s%d",s.num,s.name,&s.score);//按格式读取文件信息
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

