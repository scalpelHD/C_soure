
#include <stdio.h>
#include<time.h>
void main()
{
	int x,y,z,z0,i=0,k=0,h,t,f;
	char c,d;
	printf("请选择模式：\nA 模式1\t\tB 模式2\t\tC 模式3\t\tD 模式4\t\tE 模式5\t\tF 模式6\n");
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
		        printf("正确！");
		        if(h==1) printf("  Very good!\n");
		        if(h==2) printf("  Nice work!\n");
		        if(h==3) printf("  Excellent!\n");
		        if(h==4) printf("  Keep up the good work!\n");
	        }
	        else
	        {
	        	printf("错误!"); 
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
		    printf("正确！");
		    if(h==1) printf("  Very good!\n");
		    if(h==2) printf("  Nice work!\n");
		    if(h==3) printf("  Excellent!\n");
		    if(h==4) printf("  Keep up the good work!\n");
	    }
	    else
		{
			h=rand()%4+1;
			printf("错误!"); 
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
		            printf("正确！");
		            if(h==1) printf("  Very good!\n");
		            if(h==2) printf("  Nice work!\n");
		            if(h==3) printf("  Excellent!\n");
		            if(h==4) printf("  Keep up the good work!\n");
		            break;
	            }
	            else
	            {
	            	printf("错误!"); 
		            if(h==1) printf("  N0.Please try again.\n");
		            if(h==2) printf("  Wrong.Try once more.\n");
		            if(h==3) printf("  No.Don't give up!\n");
		            if(h==4) printf("  Not correct.Keep trying.\n");	
			    }
			}
		}
		if(i==3) printf("三次机会已经用完，很遗憾，您仍没有答对！程序结束！\n");
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
		        printf("正确！");
		        if(h==1) printf("  Very good!\n");
		        if(h==2) printf("  Nice work!\n");
		        if(h==3) printf("  Excellent!\n");
		        if(h==4) printf("  Keep up the good work!\n");
		        k++;
	        }
	        else
	        {
	        	printf("错误!"); 
		        if(h==1) printf("  N0.Please try again.\n");
		        if(h==2) printf("  Wrong.Try once more.\n");
		        if(h==3) printf("  No.Don't give up!\n");
		        if(h==4) printf("  Not correct.Keep trying.\n");	
			}
		}
		printf("您的得分为%d,得分率为%d%%。",k*10,k*10);
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
		    printf("%d%c%d=？\n",x,d,y);
		    scanf("%d",&z);
		    h=rand()%4+1;
		    if(z==z0) 
		        {
		            printf("正确！");
		            if(h==1) printf("  Very good!\n");
		            if(h==2) printf("  Nice work!\n");
		            if(h==3) printf("  Excellent!\n");
		            if(h==4) printf("  Keep up the good work!\n");
		            k++;
	            }
	            else
	            {
	            	printf("错误!"); 
		            if(h==1) printf("  N0.Please try again.\n");
		            if(h==2) printf("  Wrong.Try once more.\n");
		            if(h==3) printf("  No.Don't give up!\n");
		            if(h==4) printf("  Not correct.Keep trying.\n");	
			    }
	    }
	    printf("您的得分为%d，得分率为%d%%。\n",k*10,k*10);
	 } 
	if(c=='E')
	{
	 	k=10;
	 	do
	 	{
	 		if(k<8) printf("您的得分率低于75%%，请再做10道。\n");
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
		        printf("%d%c%d=？\n",x,d,y);
		        scanf("%d",&z);
		        h=rand()%4+1;
		        if(z==z0) 
		        {
		            printf("正确！");
		            if(h==1) printf("  Very good!\n");
		            if(h==2) printf("  Nice work!\n");
		            if(h==3) printf("  Excellent!\n");
		            if(h==4) printf("  Keep up the good work!\n");
		            k++;
	            }
	            else
	            {
	            	printf("错误!"); 
		            if(h==1) printf("  N0.Please try again.\n");
		            if(h==2) printf("  Wrong.Try once more.\n");
		            if(h==3) printf("  No.Don't give up!\n");
		            if(h==4) printf("  Not correct.Keep trying.\n");	
			    }
			}
	    }while(k<8);
	    printf("您的正确率高于75%%，恭喜通过！\n");
	}
	if(c=='F')
	{
	 	k=10;
	 	do
	 	{
	 		if(k<8) printf("您的得分率低于75%%，请再做10道。\n");
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
		        printf("%d%c%d=？\n",x,d,y);
		        scanf("%d",&z);
		        h=rand()%4+1;
		        if(z==z0) 
		        {
		            printf("正确！");
		            if(h==1) printf("  Very good!\n");
		            if(h==2) printf("  Nice work!\n");
		            if(h==3) printf("  Excellent!\n");
		            if(h==4) printf("  Keep up the good work!\n");
		            k++;
	            }
	            else
	            {
	            	printf("错误!");
					if(z>z0) printf("  您算出的结果大于正确答案。");
					else printf("  您算出的结果小于正确答案。"); 
		            if(h==1) printf("  N0.Please try again.\n");
		            if(h==2) printf("  Wrong.Try once more.\n");
		            if(h==3) printf("  No.Don't give up!\n");
		            if(h==4) printf("  Not correct.Keep trying.\n");	
			    }
			}
	    }while(k<8);
	    printf("您的正确率高于75%%，恭喜通过！\n");
	}
} 
