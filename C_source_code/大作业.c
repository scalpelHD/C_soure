
#include <stdio.h>
#include<time.h>
void main()
{
	int x,y,z,z0,i=0,k=0,h,t,f;
	char c,d;
	printf("��ѡ��ģʽ��\nA ģʽ1\t\tB ģʽ2\t\tC ģʽ3\t\tD ģʽ4\t\tE ģʽ5\t\tF ģʽ6\n");
	c=getchar();
	if(c=='A')
	{
		srand(time(NULL));
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
		do
		{
			h=rand()%4+1;
		    printf("%d%c%d=?\n",x,d,y);
		    scanf("%d",&z);
		    if(z==z0) 
		    {
		        printf("��ȷ��");
		        if(h==1) printf("  Very good!\n");
		        if(h==2) printf("  Nice work!\n");
		        if(h==3) printf("  Excellent!\n");
		        if(h==4) printf("  Keep up the good work!\n");
	        }
	        else
	        {
	        	printf("����!"); 
		        if(h==1) printf("  N0.Please try again.\n");
		        if(h==2) printf("  Wrong.Try once more.\n");
		        if(h==3) printf("  No.Don't give up!\n");
		        if(h==4) printf("  Not correct.Keep trying.\n");	
			}
		}while(z!=z0);
	}
	if(c=='B')
	{
		srand(time(NULL));
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
			x=x*y;
			z0=x/y;
		}
		h=rand()%4+1;
		printf("%d%c%d=?\n",x,d,y);
		scanf("%d",&z);
		if(z==z0) 
		{
		    printf("��ȷ��");
		    if(h==1) printf("  Very good!\n");
		    if(h==2) printf("  Nice work!\n");
		    if(h==3) printf("  Excellent!\n");
		    if(h==4) printf("  Keep up the good work!\n");
	    }
	    else
		{
			h=rand()%4+1;
			printf("����!"); 
			if(h==1) printf("  N0.Please try again.\n");
		    if(h==2) printf("  Wrong.Try once more.\n");
		    if(h==3) printf("  No.Don't give up!\n");
		    if(h==4) printf("  Not correct.Keep trying.\n");
		    for(i=0;i<3;i++)
		    {
			    h=rand()%4+1;
		        printf("%d%c%d=?\n",x,d,y);
		        scanf("%d",&z);
			    if(z==z0) 
		        {
		            printf("��ȷ��");
		            if(h==1) printf("  Very good!\n");
		            if(h==2) printf("  Nice work!\n");
		            if(h==3) printf("  Excellent!\n");
		            if(h==4) printf("  Keep up the good work!\n");
		            break;
	            }
	            else
	            {
	            	printf("����!"); 
		            if(h==1) printf("  N0.Please try again.\n");
		            if(h==2) printf("  Wrong.Try once more.\n");
		            if(h==3) printf("  No.Don't give up!\n");
		            if(h==4) printf("  Not correct.Keep trying.\n");	
			    }
			}
		}
		if(i==3) printf("���λ����Ѿ����꣬���ź�������û�д�ԣ����������\n");
	}
	if(c=='C')
	{
		for(i=0;i<10;i++)
		{
			srand(time(NULL));
		    x=rand()%10+1;
		    y=rand()%10+1;
		    h=rand()%4+1;
		    printf("%d*%d=?\n",x,y);
		    scanf("%d",&z);
		    if(z==x*y) 
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
		        if(h==1) printf("  N0.Please try again.\n");
		        if(h==2) printf("  Wrong.Try once more.\n");
		        if(h==3) printf("  No.Don't give up!\n");
		        if(h==4) printf("  Not correct.Keep trying.\n");	
			}
		}
		printf("���ĵ÷�Ϊ%d,�÷���Ϊ%d%%��",k*10,k*10);
	}
	if(c=='D')
	{
		for(i=0;i<10;i++)
		{
		    srand(time(NULL));
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
			    x=x*y;
			    z0=x/y;
		    }
		    printf("%d%c%d=��\n",x,d,y);
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
		            if(h==1) printf("  N0.Please try again.\n");
		            if(h==2) printf("  Wrong.Try once more.\n");
		            if(h==3) printf("  No.Don't give up!\n");
		            if(h==4) printf("  Not correct.Keep trying.\n");	
			    }
	    }
	    printf("���ĵ÷�Ϊ%d���÷���Ϊ%d%%��\n",k*10,k*10);
	 } 
	if(c=='E')
	{
	 	k=10;
	 	do
	 	{
	 		if(k<8) printf("���ĵ÷��ʵ���75%%��������10����\n");
	 		k=0;
	 	    for(i=0;i<10;i++)
		   {
		        srand(time(NULL));
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
			        x=x*y;
			        z0=x/y;
		        }
		        printf("%d%c%d=��\n",x,d,y);
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
		            if(h==1) printf("  N0.Please try again.\n");
		            if(h==2) printf("  Wrong.Try once more.\n");
		            if(h==3) printf("  No.Don't give up!\n");
		            if(h==4) printf("  Not correct.Keep trying.\n");	
			    }
			}
	    }while(k<8);
	    printf("������ȷ�ʸ���75%%����ϲͨ����\n");
	}
	if(c=='F')
	{
	 	k=10;
	 	do
	 	{
	 		if(k<8) printf("���ĵ÷��ʵ���75%%��������10����\n");
	 		k=0;
	 	    for(i=0;i<10;i++)
		   {
		        srand(time(NULL));
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
			        x=x*y;
			        z0=x/y;
		        }
		        printf("%d%c%d=��\n",x,d,y);
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
	    printf("������ȷ�ʸ���75%%����ϲͨ����\n");
	}
} 
