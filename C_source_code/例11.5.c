#include <stdio.h>
typedef struct student
{
	char number[20];
	char name[20];
	char sex[2];
	int age;
}STU;
void main()
{
	STU stu={"1001102","Mary","Ů",18},*p=&stu;
	printf("ѧ����Ϣ:\n");
	printf("%s\t",p->number);
	printf("%s\t",p->name);
	printf("%s\t",p->sex);
	printf("%d\t",p->age);
}
