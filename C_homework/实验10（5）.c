#include <stdio.h>
#define N 10
void main()
{
	int i,A[N],max1=-1,max2=-1;
	printf("������ʮ����������"); 
	for(i=0;i<N;i++)
	scanf("%d",&A[i]);
	for(i=0;i<N;i++)
	{
	    if(A[i]%2==0) if(A[i]>max2) max2=A[i];
	    if(A[i]%2==1) if(A[i]>max1) max1=A[i]; 
	}
	if(max1==-1) printf("û��������\n");
	else printf("��������Ϊ%d��\n",max1);
	if(max2==-1) printf("û��ż����\n");
	else printf("����ż��Ϊ%d��\n",max2); 
 } 
