#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct phonebook
{
	char num[15];
	char name[20];
	struct phonebook *next;
}PHONEBOOK;
PHONEBOOK *create()
{
	PHONEBOOK *p,*q,*head;
	int i=1,number;
	printf("Please input the number of people:\n");
	scanf("%d",&number);
	printf("Please input name and phone number:\n");
	head=0;
	while(i<=number)
	{
		if((p=(PHONEBOOK *)malloc(sizeof(PHONEBOOK)))==NULL)
		{
			printf("Not able to allocate memory!\n");
			exit(1);
		}
		printf("Please input %dth phone number and name:\n",i);
		scanf("%s",p->num);
		scanf("%s",p->name);
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
void travel(PHONEBOOK *head)
{
	PHONEBOOK *p;
	int i=1;
	p=head;
	printf("Output PHONEBOOK:\n");
	while(p!=0)
	{
		printf("The %dth name and phone number:%s\t%s\n",i,p->name,p->num);
		p=p->next;
		i++;
	}
}
PHONEBOOK *insertnode(PHONEBOOK *head,PHONEBOOK *p)
{
	PHONEBOOK *be,*ne;
	if(head==0)
	{
		head=p;
		p->next=0;
		return (head);
	}
	if(strcmp(head->name ,p->name)>=0)
	{
		p->next=head;
		head=p;
		return (head);
	}
	be=ne=head;
	while(ne!=0&&strcmp(ne->name,p->name)<0)
	{
		be=ne;
		ne=ne->next;
	}
	p->next=ne;
	be->next=p;
	return (head);
}
PHONEBOOK *deletenode(PHONEBOOK *head,char name[])
{
	PHONEBOOK *be,*p;
	if(head==NULL)
	{
		printf("No node to delete!\n");
		return (head);
	}
	if(strcmp(head->name,name)==0)
	{
		p=head;
		head=head->next;
		free(p);
	}
	else
	{
		be=p=head;
		while(strcmp(p->name ,name)!=0&&p->next!=NULL)
		{
			be=p;
			p=p->next;
		}
		if(strcmp(p->name,name)==0)
		{
			be->next=p->next;
			free(p);
			printf("Ddelete one node!\n");
		}
		else printf("Not found!\n");
	}
	return (head);
}
void releasechain(PHONEBOOK *head)
{
	PHONEBOOK *p;
	while(head)
	{
		p=head;
		head=head->next;
		free(p);
	}
}
void main()
{
	PHONEBOOK *head,*t;
	char n[10];
	head=create();
	travel(head);
	if((t=(PHONEBOOK *)malloc(sizeof(PHONEBOOK)))==NULL)
	{
		printf("Not able to allocate memory!\n");
		exit(1);
	}
	printf("Please input you want to insert name and phone number:\n");
	scanf("%s%s",t->name,t->num);
	head=insertnode(head,t);
	travel(head);
	printf("Please input you want to delete the name:\n");
	scanf("%s",n);
	head=deletenode(head,n);
	travel(head);
	releasechain(head);
}
