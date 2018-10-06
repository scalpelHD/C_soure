#include <stdio.h>
int main(viod)
{
	int a;
	double b;
	printf("请输入电量：\n\a");
	scanf("%d",&a);
	if(a>0)
	  if(a>0&&a<=230)
	    {
		  b=a*0.5283;
		  printf("应缴电费为%.2lf元！\n\a",b);
	    }
	  else
	    if(a>230&&a<=400)
	    {
	      b=230*0.5283+(a-230)*0.5783;
	      printf("应缴电费为%.2lf元!\n\a",b);
	    }
	    else
	    {
	      b=230*0.5283+170*0.5783+(a-400)*0.8783;
	      printf("应缴电费为%.2lf元！\n\a",b);
	    }
	else
	  printf("输入的数据错误！\n\a"); 
	return 0;
 }
