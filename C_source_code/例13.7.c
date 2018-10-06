#include <stdio.h>
void sum(int (*p)[5])//行指针 
{
	int i,j;
	for(i=0;i<3;i++) for(j=0;j<4;j++) *(*(p+i)+4)+=*(*(p+i)+j);
}
void out(int a[3][5])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++) printf("%d\t",a[i][j]);
		printf("\n");
	}
}
void main()
{
	int s[3][5]={{78,86,71,90},{85,91,76,77},{65,71,73,68}}; 
	void (*p1) (int (*p)[5]),(*p2) (int a[][5]);//指向函数的指针变量 
	p1=sum;
	p2=out;
	p1(s);
	printf("The score is:\n");
	p2(s);
 } 
