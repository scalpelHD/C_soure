#include <stdio.h>
#include<math.h>
void main()
{
	int n=0,i,s,m;
	while(s!=765) 
	{
		n++,s=0;
		for(i=1;i<=8;i++)
		{
		    m=n*pow(2,i-1);
			s+=m;
		}
	}
	printf("���²���%dյ�ƣ����ϲ���%dյ�ơ�\n",n,m); 
 }
