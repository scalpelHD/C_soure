#include <stdio.h>
#define N 20
void main()
{
	int a[N],k=0,z=0,f=0,i=0,s=0;
	printf("������һ���0����(������0Ϊ������־)��");
	do
	{
		scanf("%d",&a[i]);
		k++;
		i++;
	}while(a[i-1]!=0);
	for(i=0;i<k;i++)
	{
		s=s+a[i]; 
		if(a[i]>0) z++;
		if(a[i]<0) f++;
	}
	printf("�������ݵ�ƽ��ֵΪ%f��\n��������Ϊ%d��\n��������Ϊ%d��\n",s/(float)(k-1),z,f);
 } 
