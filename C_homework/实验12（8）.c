#include <stdio.h>
void fun(int a[3][3],int b[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		b[j][i]=a[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++) printf("%-4d",b[i][j]);
		printf("\n"); 
	} 
}
void main()
{
	int a[3][3],b[3][3],i,j;
	printf("������һ�����׷���\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++) scanf("%d",&a[i][j]);
	fun(a,b);
 } 
