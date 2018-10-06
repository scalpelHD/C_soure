#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct student
{
	char num[10];
	int score;
	struct student *next;
}STUDENT;
STUDENT *create()//创建链表 
{
	STUDENT *p,*q,*head;
	int i=1;
	head=0;
	while(i<=4)
	{
		if((p=(STUDENT *)malloc(sizeof(STUDENT)))==NULL)
		{
			printf("Not able to allocate memory!\n");
			exit(0);
		}
		printf("Please input %dth student's ID and score:\n",i);
		scanf("%s%d",p->num,&p->score);
		if(head==0)
		{
			head=p;
			q=p;	
		}
		else 
		{
			q->next=p;
			q=p;
		}
		i++;
	}
	q->next=0;
	return (head);
}
void travel(STUDENT *head)//遍历链表 
{
	STUDENT *p;
	int i=1;
	p=head;
	printf("Output data:\n");
	while(p)
	{
		printf("The %dth node is:\n",i);
		printf("%s %d\n"p->num,p->score);
		p=p->next;
		i++;	
	}
}
STUDENT *insertnode(STUDENT *head,STUDENT *p)//插入结点 
{
	STUDENT *be,*ne;
	if(head==0)//空链表插入 
	{
		head=p;
		p->next=0;
		return (head);
	} 
	if(strcmp(head->num,p->num)>=0) //插入头之前
	{
		p->next=head;
		head=p;
		return (head);
	}
	be=ne=head;//在链表中插入新结点 
	while(ne!=0&&strcmp(ne->num ,p->num )<0)
	{
		be=ne;
		ne=ne->next ;
	}
	p->next=ne ;
	be->next =p;
	return (head); 
}
STUDENT *deletenode(STUDENT *head,char *num)//删除结点 
{
	STUDENT *be,*p;
	if(head==NULL)//链表为空
	{
		printf("No node to delete!\n");
		return (head);
	}
	if(strcmp(head->num ,num)==0)//删除头结点
	{
		p=head;
		head=head->next ;
		free(p);
	}
	else//删除其他位置的结点 
	{
		be=p=head;
		while(strcmp(p->num ,num)!=0&&p->next!=NULL)
		{
			be=p;
			p=p->next ;
		}
		if(strcmp(p->num ,num)==0)
		{
			be->next=p->next ;
			free(p);
			printf("Delete one node!\n");
		}
		else printf("Not found!\n");
	 }
	 return (head); 
}
void releasechain(STUDENT *head)//释放链表空间 
{
	STUDENT *p;
	while(head)
	{
		p=head;
		head=head->next ;
		free(p);
	 } 
}
 
