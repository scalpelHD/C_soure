#include <stdio.h>
#include<stdlib.h> 
int main()
{
	int n,i;
	double m;
	while(m>0)
	{
	m=1;
	printf("������n��ֵ��");
	scanf("%d",&n);
	if(n>0)
	{
	for(i=1;i<=n;i++)
	 m=m*i;
	printf("%d!=%e\n",n,m);
    }
    else 
	printf("�������ݴ���\n");
	fflush(stdin);
    }
    while(1);
	return 0;
 } 
