#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
void main()
{
	int i,x,y,z,z0,h,k=10,f,t;
	char c,d;
	while(1) 
	{
	printf("��ʼ���ԣ�\n");
	do
	{
	    if(k<8) printf("���ĵ÷�Ϊ%d�֣���ȷ��Ϊ%d%%,����75%%��������10����\n",k*10,k*10);
	    k=0;
	    for(i=0;i<10;i++)
		{
		    srand(time(0));
		    x=rand()%10+1;
		    y=rand()%10+1;
		    f=rand()%4+1;
		    if(f==1) d='+',z0=x+y;
		    if(f==2) 
		    {
			    d='-';
			    if(x<y)
			    {
				    t=y;
				    y=x;
				    x=t;
			    }
			    z0=x-y;
		    }
		    if(f==3) d='*',z0=x*y;
		    if(f==4) 
		    {
			    d='/'; 
			    if(x<y)
			    {
				    t=y;
				    y=x;
				    x=t;
			    }
			    x=(x/y)*y;
			    z0=x/y;
		    }
		    printf("(%d) %d%c%d=��\n",i+1,x,d,y);
		    scanf("%d",&z);
		    h=rand()%4+1;
		    if(z==z0) 
		    {
		        printf("��ȷ��");
		        if(h==1) printf("  Very good!\n");
		        if(h==2) printf("  Nice work!\n");
		        if(h==3) printf("  Excellent!\n");
		        if(h==4) printf("  Keep up the good work!\n");
		        k++;
	        }
	        else
	        {
	            printf("����!");
				if(z>z0) printf("  ������Ľ��������ȷ�𰸡�");
				else printf("  ������Ľ��С����ȷ�𰸡�"); 
		        if(h==1) printf("  N0.Please try again.\n");
		        if(h==2) printf("  Wrong.Try once more.\n");
		        if(h==3) printf("  No.Don't give up!\n");
		        if(h==4) printf("  Not correct.Keep trying.\n");	
			}
		}
	}while(k<8);
	printf("���ĵ÷�Ϊ%d��,��ȷ��Ϊ%d%%,����75%%����ϲͨ����\n",k*10,k*10);
	printf("���Ƿ�Ҫ�������ԣ�\nA YES!\tB NO!\n"); 
	scanf(" %c",&c); 
	if(c=='B') break;
    }
}
