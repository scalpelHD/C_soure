#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
void main()
{
	int i,x,y,z,z0,h,k=10,f,t;
	char c,d;
	while(1) 
	{
	printf("开始测试！\n");
	do
	{
	    if(k<8) printf("您的得分为%d分，正确率为%d%%,低于75%%，请再做10道。\n",k*10,k*10);
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
		    printf("(%d) %d%c%d=？\n",i+1,x,d,y);
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
	printf("您的得分为%d分,正确率为%d%%,高于75%%，恭喜通过！\n",k*10,k*10);
	printf("您是否要继续测试？\nA YES!\tB NO!\n"); 
	scanf(" %c",&c); 
	if(c=='B') break;
    }
}
