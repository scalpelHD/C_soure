#include <stdio.h>
void main()
{
	int *p,s[10],m,n,i,j,t,k;
	printf("�������������е�10��������");
	for(i=0;i<10;i++) scanf("%d",&s[i]);
	printf("�����뿪ʼ������λ�ã�");
	scanf("%d",&m);
	printf("����������ĳ��ȣ�");
	scanf("%d",&n);
	p=&s[m-1];
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++) if(*(p+j)>*(p+k)) k=j;
		if(i!=k)
		{
			t=*(p+k);
			*(p+k)=*(p+i);
			*(p+i)=t;
		}
	}
	for(i=0;i<10;i++) printf("%-4d",s[i]);
 } 
