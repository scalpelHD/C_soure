#include <stdio.h>
void calgrade(int score)
{
	if(score<0||score>100)
	  printf("输入的得分错误！\n");
	else
	  switch(score/10)
	  {
	  	case 10:
	  	case 9:printf("等级为A\n\a");break;
	  	case 8:printf("等级为B\n");break;
	  	case 7:printf("等级为C\n");break;
	  	case 6:printf("等级为D\n");break;
	  	default:printf("等级为E\n"); 
	  }
}
int main(void)
{
	int score;
	while(score>=0) 
	{
	printf("请输入百分制得分：\n");
	scanf("%d",&score);
	calgrade(score);
    }
	while(1);
	return 0;
 } 
