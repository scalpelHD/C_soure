#include<stdio.h>
void main()
{
	int a[3][4],b[3][4],i,j,s1=0,s2=0,x;
	printf("����������˵�ÿ�����������\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++) 
		{
			scanf("%d",&a[i][j]);
			s1+=a[i][j];
		}
	printf("���������Ͼŵ�ÿ�����������\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
		{
			scanf("%d",&b[i][j]);
			s2+=b[i][j];
		}
		x=s1-s2;
		if(x<0) printf("������%d���顣\n",-x);
		if(x==0) printf("���������û������Ҳû�м��١�\n");
		if(x>0) printf("������%d���顣\n",x);
}