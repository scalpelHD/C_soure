#include<stdio.h>
void main()
{
	int a[3][4],b[]={0,0,0,0,0,0,0,0,0,0},i,j,k,x;
	printf("������һ��3x4�ľ���\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++) scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			x=a[i][j];
			do
			{	
				k=x%10;
				x/=10;
				b[k]=b[k]+1;
			}while(x!=0);
		}
	}
	for(i=0;i<10;i++) printf("%d:%d��\t",i,b[i]);
	printf("\n");
}
